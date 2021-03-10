#include <stdio.h>
#include <unistd.h>

int main() {

	char *argv[3] = {"sequential_min_max", "1", "10"};

	int pipe_i = fork();

	if ( pipe_i == 0 ) {
        execv("sequential_min_max",  argv);
	}

	wait(0);
  
	return 0;
}