#include <unistd.h>
#include <sys/wait.h>

int main() {
	pid_t pid;
	int status;
	int i = 1;

	if ((pid = fork()) == 0) {
		printf("[proc #%d] pid; %d\n", i, getpid());
		_exit(i);
	} else {
		pid_t terminated_pid = wait(&status);
		printf("[pai] process %d existed. exit code: %d\n", terminated_pid. WEXITSTATUS(status));
	}

	return 0;
}