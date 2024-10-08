/*Given the list of processes, their CPU burst times. Display/print the Gantt chart for
FCFS, SJF, Priority and Round Robin scheduling algorithm. Compute and print the
average waiting time and average turnaround time*/

//PART 2
// SJF- Shortest Job First SCHEDULING

//Code:
#include<stdio.h>
int main() {
  int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,totalT=0,pos,temp;
  float avg_wt,avg_tat;
  printf("Enter number of process: ");
  scanf("%d",&n);
  printf("\nEnter Burst Time:\n");
  for(i=0;i<n;i++){
    printf("p%d:",i+1);
    scanf("%d",&bt[i]);
    p[i]=i+1;
}
//sorting of burst times
for(i=0;i<n;i++){
  pos=i;
  for(j=i+1;j<n;j++) {
    if(bt[j]<bt[pos])
      pos=j;
}
temp=bt[i];
bt[i]=bt[pos];
bt[pos]=temp;
temp=p[i];
p[i]=p[pos];
p[pos]=temp; }
wt[0]=0;
//finding the waiting time of all the processes
for(i=1;i<n;i++){
  wt[i]=0;
  for(j=0;j<i;j++)
//individual WT by adding BT of all previous completed processes
    wt[i]+=bt[j];
//total waiting time
    total+=wt[i];
}
//average waiting time
avg_wt=(float)total/n;
printf("\nProcess\t Burst Time \tWaiting Time\tTurnaround Time");
for(i=0;i<n;i++){
  tat[i]=bt[i]+wt[i];
  totalT+=tat[i];
  printf("\np%d\t\t %d\t\t %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
}
avg_tat=(float)totalT/n; printf("\n\nAverage Waiting Time=%f" ,avg_wt);
printf("\nAverage Turnaround Time=%f" ,avg_tat);

retunnr 0;
}


//Expected output:
/*Enter number of process: 4
Enter Burst Time:
p1:5
p2:7
p3:9
p4:2
Process Burst Time Waiting Time Turnaround Time
p4 2 0 2
p1 5 2 7
p2 7 7 14
p3 9 14 23
Average Waiting Time=5.750000
Average Turnaround Time=11.500000 */
