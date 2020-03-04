#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

ssize_t readlnOne(int fildes, char *line, ssize_t nbyte) {
    ssize_t res = 0;
    int pos = 0;

    while(pos < nbyte && (res = read(fildes, line+pos,1)) > 0) {
        if (line[pos] == '\n') {
            return pos;
        }
        pos += res;
    }

    return 0;
}

int main(int argc, char *agrv[]) {
    int fd = 0;
    ssize_t res;
    char line[1024];
    int counter = 1;
    char ctr_str[10];

    if(argc > 1) {
        fd = open(agrv[1],O_RDONLY);
    } else {
        fd = 0;
    }

    while((res = readlnOne(fd,line,1024)) > 0 || line[0] == '\n') {
        if (line[0] != '\n') {
            bzero(ctr_str, sizeof(ctr_str));
            sprintf(ctr_str, "\t%d ", counter++);

            write(1,ctr_str, sizeof(ctr_str));
            write(1,line,res+1);
        }
    }
    return 0;
}