#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    char buf[1] = {'a'};
    int bytes = 0;

    if (argc < 3) {
        printf("Missing argument.\n");
        return 1;
    }

    int size = atoi(argv[2]);

    int fd = open(argv[1], O_CREAT | O_TRUNC | O_WRONLY, 0640);

    if (fd < 0) {
        perror("open:");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        bytes += write(fd,buf,1);
    }

    // Printfs só para "debug" na aula. Não devem ser usados.
    printf("bytes: %d\n", bytes);
    close(fd);

    return 0;
}