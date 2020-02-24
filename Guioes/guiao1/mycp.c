#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int bytesread = 0;
    int byteswrite = 0;
    int nread = 0;

    if (argc < 4) {
        printf("Missing argument.\n");
        return 1;
    }

    ssize_t buffer_size = atoi(argv[3]);
    char buf[buffer_size];

    int fdrd = open(argv[1], O_RDONLY, 0640);
    int fdwr = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0640);

    if (fdrd < 0 || fdwr < 0) {
        perror("open:");
        return 1;
    }

    while ((nread = read(fdrd,buf,buffer_size)) > 0) {
        bytesread = nread;
        byteswrite += write(fdwr,buf,nread);
    }

    printf("bytesread: %d\n", bytesread);
    printf("byteswrite: %d\n", byteswrite);

    close(fdrd);
    close(fdwr);

    return 0;
}