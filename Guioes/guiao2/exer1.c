#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char const *argv[]) {

    if(fork() == 0) {
        printf("Processo flho id: %d\n",getpid());
        printf("Processo pai id: %d\n",getppid());
    }

    sleep(20);

    return 0;
}