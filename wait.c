#include<sys/types.h>
#include<sys/wait.h>
//Synatx for wait function - pid_t wait(int *wstatus);
int main(){
             pid_t p=fork();
             if(p==0){
             printf("Child Process");
             }else{
             printf("Parent Process");
             wait(NULL);
             printf("Child has terminated");
             }
             printf("BYE");
}
