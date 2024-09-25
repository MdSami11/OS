#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
int main()
{
        pid_t p=fork();
        pid_t p1=fork();
        if (p<0){
                printf("fork fail");
                exit(1);
       }
       printf("Hello all, My process id is: %d\n", getpid());
}

