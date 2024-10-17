//implement UNIX system calls like ps, fork, join, exec,
//family and wait for process management 

//USING fork()

#include<sys/wait.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main(){
pid_t pid;
printf("Hello");
pid=fork();
if(pid==0){
printf("I am child process);
}
if(pid>0){
printf("I am a parent process");
wait(NULL);
printf("My name is Mili");
}
if(pid<0){
printf("Child is not created");
}
exit(0);
printf("Everyone");
}


//output:
/*Hello
I am the parent process
I am the child process
My name is Mili*/
