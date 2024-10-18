//Program 1:
#include<sys/wait.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc,char*argv[]){
printf("Hello Everyone");
return 0;
}

//Program 2:
#include<sys/wait.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main(int argc,char*argv[]){
printf("I am in second program");
char*args[]={"Hello","C","Programming", NULL};
execv("./prog1",args);
printf("Back to program");
return 0;
}

//commands to use on ubuntu terminal:
//bi@bi-OptiPlex-3090:~$ gcc prog1.c -o prog1
//bi@bi-OptiPlex-3090:~$ gcc prog2.c -o prog2
//bi@bi-OptiPlex-3090:~$ ./prog2

//output:
/*I am second program
Hello Everyone */
