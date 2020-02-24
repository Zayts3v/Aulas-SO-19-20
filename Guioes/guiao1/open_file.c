#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

    if (argc < 2) {
        printf("Missing argument.\n");
        return 1;
    }

    int fd = open(argv[1], O_CREAT | O_TRUNC | O_WRONLY, 0640);

    if (fd < 0) {
        perror("open:");
        return 1;
    }

    close(fd);

    return 0;
}