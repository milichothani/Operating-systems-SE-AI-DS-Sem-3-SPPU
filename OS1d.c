//PART 4
//PRIORITY SCHEDULING IN OPERATING SYSTEMS




#include<stdio.h>
#define max 5
int main(){
    int i,j,n,t,p[max], bt[max], pr[max], wt[max], tat[max], totalwt=0, totaltat=0;
    float awt=0, atat=0;
    printf("Enter the number of processses\n");
    scanf("%d",&n);

    //Enter processes according to their arrival times
    for(i=0;i<n;i++){
        printf("Enter the process number: ");
        scanf("%d", &p[i]);
        printf("Enter the burst time of the process: ");
        scanf("%d", &bt[i]);
        printf("Enter the priority of the process: ");
        scanf("%d", &pr[i]);
    }

    //Apply the bubble sort technique to the sort the processes according to their priorities times
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(pr[j]>pr[j+1]){
                //sort according to priority
                t=pr[j];
                pr[j]=pr[j+1];
                pr[j+1]=t;

                //sorting burst time
                t=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=t;

                //sorting process numbers
                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
            }
        }
    }
    printf("Processs id \t Burst time \t Priority \t Waiting time \t Turn around time\n");
    for(i=0;i<n;i++){
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
        wt[i]=wt[i]+bt[i];
        tat[i]=wt[i]+bt[i];
        totalwt=totalwt+wt[i];
        totaltat=totaltat+tat[i];
        printf("%d\t\t %d\t\t%d\t\t%d\t\t%d\n", p[i],bt[i],pr[i],wt[i],wt[i],tat[i]);
    }
    awt=(float)totalwt/n;
    atat=(float)totaltat/n;
    printf("The average waiting time=%f\n",awt);
    printf("The average turn around time= %f\n", atat);

}
