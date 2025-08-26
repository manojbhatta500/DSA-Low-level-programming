#include<stdio.h>
#include<unistd.h>


int main(){

    printf("the process id of this program is %d\n",getpid());
    printf("the parent pid is %d\n",getppid());



    return 0;
}



// writing a program that prints the current pid 
// and parents id or ppid  