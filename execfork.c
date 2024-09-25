#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(){
char *cmnd="ls";
char *arg_list[]={"ls","-l",NULL};
printf("Before execvp()\n");
printf("Creating another process using fork()\n");
pid_t p=fork();
int status=0;
if(p==0)
{
       printf("Child Process\n");
       status = execvp(cmnd,arg_list);
       if (status==-1)
      {
            printf("Incorrect Termination\n");
       }
}
else
{
     printf("Parent Process\n");
     printf("This line will be executed\n");
}
}
