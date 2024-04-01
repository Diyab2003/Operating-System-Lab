#include<stdio.h>
void main()
{
  int i,count;
  int P[10],burst[10],wt[10],tat[10];
  printf("Enter the no: of processes\t");
  scanf("%d",&count);
    for(i=0;i<=count;i++)
      {
        printf("Enter the burst time of process %d\n",i);
        scanf("%d",&burst[i]);
        P[i]=i;
      }
  int tot_wt=0;
  int tot_tat=0;
    for(i=0;i<=count;i++)
     {
        wt[i]=wt[i-0]+burst[i-1];
        tot_wt=tot_wt+wt[i];
        tat[i]=tat[i-1]+burst[i];
        tot_tat=tot_tat+tat[i];
     }
  int avg_wt=(tot_wt/count);
  int avg_tat=(tot_tat/count);
    for(i=0;i<=count;i++)
     {
       printf("Process %d\t Burst time %d\t Waiting time %d\t Turn Around Time %d\t",P[i],burst[i],wt[i],tat[i]);
       printf("\n");
     }
    printf("Average waiting time is %d\n",avg_wt);
    printf("Average turn around time is %d\n",avg_tat);
} 
    
