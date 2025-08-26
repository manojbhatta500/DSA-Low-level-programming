#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>


int main(){
    pid_t f = fork();

    if(f == -1){
        perror("fork failed");
        exit(1);
    }


    if(f == 0){
        printf("Child:  PID: %d\n", getpid());
        sleep(2);
        printf("child work complete\n");
        exit(100);
    }else{
        printf("waiting for a child to finish\n");
        int childProcessExitStatus;
        wait(&childProcessExitStatus);
        printf("Parent: Child finished with status: %d\n", WEXITSTATUS(childProcessExitStatus));
        printf("Parent: Continuing my work\n");

    }






    return 0;
}