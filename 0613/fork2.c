#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
/* 부모 프로세스가 자식 프로세스를 생성하고 서로 다른 메시지를 프린트한다. */
int main() 
{
int pid;
pid = fork();
if(pid ==0){ // 자식 프로세스
printf("[Child] : 자식프로세스 pid=%d\n",getpid());
}
else { // 부모 프로세스
printf("[Parent] : 부모프로세스  pid=%d\n",getpid());
}
}
