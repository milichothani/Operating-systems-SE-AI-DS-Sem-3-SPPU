/*Given the list of processes, their CPU burst times. Display/print the Gantt chart for
FCFS, SJF, Priority and Round Robin scheduling algorithm. Compute and print the
average waiting time and average turnaround time*/

//PART 1
//FCFS- First Come First Serve SCHEDULING



#include<stdio.h>
#include<stdlib.h>  //standard library

int main(){
  char **processNames; //Array of process names
  int*arrival_time; //Array to store arrival time
  int*burst_time; //Array to sto0re the burst time
  int*completion_time; //Array to store completion time
  int*turnaround_time; //Array to store turn around time
  int*waiting_time; //Array to store waiting time

  int n; //Number of processes

  printf("Enter the number of processes: ");
  scanf("&d, &n");

  //dynamic memeory allocation
  processNames=(char**)malloc(n*sizeof(char*));
  for(int i=0; i<n; i++){
    processNames[i]=(char*)malloc(10*sizeof(char));  
    //each process name can be upto 9 characters +null terminator
  }
  arrival_time=(int*)malloc(n*sizeof(int));
  burst_time=(int*)malloc(n*sizeof(int));
  completion_time=(int*)malloc(n*sizeof(int));
  turnaround_time=(int*)malloc(n*sizeof(int));
  waiting_time=(int*)malloc(n*sizeof(int));

  //input process
  for(int i=0; i<n; i++){
    printf("\nEnter process name, arrival time, and brust time for process %d: ", i+1);
    scanf("%s %d %d", processNames[i], &arrival_time[i], &burst_time[i]);
  }

  //calculate completion time, turnaround time and waiting time
  int current_time=0;
  for(int i=0; i<n; i++){
    if(current_time<arrival_time[i]){
        current_time=arrival_time[i];
    }
    current_time+=burst_time[i];
    completion_time[i]=current_time;
    turnaround_time[i]=completion_time[i]-arrival_time[i];
    waiting_time[i]=turnaround_time[i]-burst_time[i];
  }
   //print result
   printf("%-10s %-15s %-20s %-20s %-15s\n","process", "Arrival time", "Burst time", "Completion time", "Turnaround time", "Waiting time");
   for(int i=0; i<n;i++){
    printf("%-10s %-15d %-15d%-20d %-20d %-15d\n ");
    processNames[i];
    arrival_time[i];
    burst_time[i];
    completion_time[i];
    turnaround_time[i];
    waiting_time[i];
   }

   //free allocated memory
   for(int i=0; i<n; i++){
    free(processNames[i]);
   }
    free(processNames);
    free(arrival_time);
    free(burst_time);
    free(completion_time);
    free(turnaround_time);
    free(waiting_time);

    return 0;
}
