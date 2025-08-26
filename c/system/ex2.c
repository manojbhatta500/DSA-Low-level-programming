#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>



int main(){


    pid_t parentPid = getppid();
    if(parentPid == -1){
        perror("failed to get parent id");
        // return 1;
        exit(1);
    }

    pid_t currentId =  getpid();
    if(currentId == -1){
        perror("failed to get child process id");
        exit(1);
    }


    printf("the addition of current id and current parent id is %d\n",(currentId + parentPid));

    return 0;
}