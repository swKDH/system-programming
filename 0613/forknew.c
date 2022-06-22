#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(){
	int pid
	pid = fork();
	if(pid ==0){
		printf("child process, pid=%d\n", getpid());
	}
	else{
		printf("parent process, pid=%d\n", getpid());
	}
}
