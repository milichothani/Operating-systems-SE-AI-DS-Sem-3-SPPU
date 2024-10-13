#PART 3
#ROUND ROBIN SCHEDULING





def findwaitingtime(process,n,bt,wt,quantum):
    rem_bt=[0]*n
    for i in range(n):
        rem_bt[i]=bt[i]
        
    t=0
    while True:
        done=True
        for i in range(n):
            if rem_bt[i]>0:
                done=False
                if rem_bt[i]>quantum:
                    t+=quantum
                    rem_bt[i]-=quantum
                else:
                    t+=rem_bt[i]
                    wt[i]=t-bt[i]
                    rem_bt[i]=0
        if done:
            break
        
def findtat(processes,n,bt,wt,tat):
    for i in range(n):
        tat[i]=bt[i]+wt[i]
        
def findavgtime(processes,n,bt,quantum):
    wt=[0]*n
    tat=[0]*n
    
    findwaitingtime(processes,n,bt,wt,quantum)
    findtat(processes,n,bt,wt,tat)
    print("processes | Burst time | Waiting time | Turn-Around time")
    totalwt=0
    totaltat=0
    for i in range(n):
        totalwt+=wt[i]
        totaltat+=tat[i]
        print(f"{i+1}\t\t\t\t{bt[i]}\t\t\t\t{wt[i]}\t\t\t\t{tat[i]}")
    print("\nAverage waiting time = %.5f"(totalwt/n))
    print("\nAverage Turn around time = %.5f"(totaltat/n))
    
if__name__="__main__":
    proc=[1,2,3,4]
    n=len(proc)
    burst_time=[11,7,15,4]
    quantum=4
    findavgtime(proc,n,burst_time,quantum)
