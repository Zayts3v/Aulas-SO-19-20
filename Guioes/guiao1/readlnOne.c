#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <sys/types.h>

ssize_t readlnOne(int fildes, char *buf, ssize_t nbyte) {
    ssize_t res = 0;
    int pos = 0;

    while(pos < nbyte && (res = read(fildes, buf+pos,1)) > 0) {
        if (buf[pos] == '\n') {
            return pos;
        }
        pos += res;
    }

    return 0;
}

int main(int argc, char const *argv[]) {
    int res;

    if(argc < 2) {
        perror("Missing arguments");
    }

    ssize_t nbyte = 1024;
    char buf[1024];

    int fd = open(argv[1], O_RDONLY, 0640);

    res = readlnOne(fd,buf,nbyte);
    buf[res+1] = '\0';

    // Uncomment for test
    write(1,buf,res);

    return res;
}