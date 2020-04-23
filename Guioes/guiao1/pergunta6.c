#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "person.h"

int i_function(char* name, int age) {
    if (new_person(name,age) == 0) {
        return 0;
    }
    fd = open();
    ls
    write(fd,O_WRONLY,0640)
    perror("Error when creating/inserting");
    return -1;
}

int u_function(char* name, int age) {
    if (person_change_age(name,age) == 0) {
        return 0;
    }
    perror("Error updating age");
    return -1;
}

int main(int argc, char *argv[]) {
    int res = 0;

    if (argc < 4) {
        perror("Missing arguments");
    }

    if (strcmp(argv[1],"-i") == 0) {
        res = i_function(argv[2], atoi(argv[3]));
    } else if (strcmp(argv[1],"-u") == 0) {
        res = u_function(argv[2], atoi(argv[3]));
    } else {
        perror("Arguments should be 'pessoas -i <name> <age>' or 'pessoas -u <name> <age>'");
    }

    return res;
}