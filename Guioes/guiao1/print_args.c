#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

    for (int i = 0; i < argc; i++) {
        printf("argc[%d]: %s\n", i, argv[i]);
    }

    return 1;
}