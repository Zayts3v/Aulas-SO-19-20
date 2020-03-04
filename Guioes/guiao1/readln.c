#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

int readchar(int fildes, char *buf) {

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

    *buf = buffer[next_position];
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


int main(int argc, char const *argv[]) {

    if(argc < 2) {
        perror("Missing arguments");
    }

    ssize_t nbyte = 1024;
    char line[1024];

    int fd  = open(argv[1], O_RDONLY);

    int res = readln(fd,line,nbyte);

    // Uncomment for test
    write(1,line,res);

    return res;
}