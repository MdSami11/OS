#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
int main()
{
              pid_t p=fork();
              if(p==0){
               printf("i am a child process with id: %d\n", getpid());
               printf("My parent id id %d\n", getppid());
               }
               
              else{
               printf("i am a parent process with id: %d\n", getpid());
               printf("My child process is %d\n", p);
                        }

}
