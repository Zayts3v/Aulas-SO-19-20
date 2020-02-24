#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int nread = 0;

    ssize_t buffer_size = 1024;
    char buf[buffer_size];

    while ((nread = read(0,buf,buffer_size)) > 0) {
        write(1,buf,nread);
    }

    return 0;
}