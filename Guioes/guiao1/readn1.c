#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

#define BUFFER_SIZE 1024

int readchar(int fildes, char *line) {

    static int last_read_bytes = 0;
    static int next_position = 0;
    static char buffer[BUFFER_SIZE];

    if (next_position == last_read_bytes) {
        
        int bytes = 0;
        if(( bytes = read(fildes,buffer,BUFFER_SIZE)) < 1) {
            return 1;
        }

        next_position = 0;
        last_read_bytes = bytes;
        
    }

    *line = buffer[next_position];
    next_position++;

    return 0;
}

ssize_t readln(int fildes, char *line, ssize_t nbyte) {

    int next_pos = 0;

    while(next_pos < nbyte && readchar(fildes,line + next_pos) == 0) {

        if(line[next_pos] == '\n') {
            break;
        }

        next_pos++;
    }

    return next_pos;
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

    while((res = readln(fd,line,1024)) > 0 || line[0] == '\n') {
        if (line[0] != '\n') {
            bzero(ctr_str, sizeof(ctr_str));
            sprintf(ctr_str, "\t%d ", counter++);

            write(1,ctr_str, sizeof(ctr_str));
            write(1,line,res+1);
        }
    }

    return 0;
}