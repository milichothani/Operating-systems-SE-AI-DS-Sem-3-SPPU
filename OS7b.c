//Part 2:

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main(){
pid_t pid;
printf("Hello");
pid=fork();
if(getppid==0){
printf("I am child process");
}
if(getppid>0){
printf("I am parent process");
}
if(getppid<0){
printf("Child is not created");
}
printf("Everyone");
printf("Process id is %d\n", getppid());
return 0;
}

//output:
/*Hello
I am parent process
Everyone
Process id is 5119
I am parent process
Everyone
Process is is 5225 */
