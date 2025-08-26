#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>



int main(){
    
    printf("current parent id %d  and current pid %d\n",getppid(),getpid());


    pid_t  childProcessPid = fork();

    if(childProcessPid==-1){
        perror("failed to get the current child process\n");
        exit(-1);
    }else if(childProcessPid == 0){
    printf("current parent id %d  and current pid %d\n",getppid(),getpid());
  
    }else{
        printf("In parent: PID = %d, Child PID = %d\n", getpid(), childProcessPid);
    }

    return 0;
}