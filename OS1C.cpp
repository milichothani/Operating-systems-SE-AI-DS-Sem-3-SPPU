//PART 3
//RR - Rpound Robin scheduling



def FindWaitingTime(process, n, bt, wt, quantum):
 rem_bt = [0] * n
 for i in range(n):
 rem_bt[i] = bt[i]

 t = 0
 while True:
 done = True
 for i in range(n):
 if rem_bt[i] > 0:
 done = False
 if rem_bt[i] > quantum:
 t += quantum
 rem_bt[i] -= quantum
 else:
 t += rem_bt[i]
 wt[i] = t - bt[i]
 rem_bt[i] = 0
 if done:
 break
def findTurnAroundTime(processes, n, bt, wt, tat):
 for i in range(n):
 tat[i] = bt[i] + wt[i]
def findAvgTime(processes, n, bt, quantum):
 wt = [0] * n
 tat = [0] * n

 FindWaitingTime(processes, n, bt, wt, quantum)
 findTurnAroundTime(processes, n, bt, wt, tat)

 print("Processes | Burst Time | Waiting Time | Turn-Around Time")
 total_wt = 0
 total_tat = 0
 for i in range(n):
 total_wt += wt[i]
 total_tat += tat[i]
 print(f" {i + 1}\t\t\t\t {bt[i]}\t\t\t\t {wt[i]}\t\t\t\t {tat[i]}")

 print("\nAverage waiting time = %.5f " % (total_wt / n))
 print("Average turn around time = %.5f " % (total_tat / n))
if __name__ == "__main__":
 proc = [1, 2, 3, 4]
 n = len(proc)
 burst_time = [11, 7, 15, 4]
 quantum = 4
 findAvgTime(proc, n, burst_time, quantum)


//Expected output:
/*Processes | Burst Time | Waiting Time | Turn-Around Time
1             11              19               30
2             7               16               23
3             15              22               37
4             4               12               16
Average waiting time = 17.25000
Average turn around time = 26.50000 */
