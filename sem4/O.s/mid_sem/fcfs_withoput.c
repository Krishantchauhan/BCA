#include<Stdio.h>
#define max 30
void main(){
  int i,p,bt[max],tat[max],wt[max],ct[max];
  float awt=0,atat=0;

  printf("Enter the number of process\n");
  scanf("%d",&p);

  printf("Enter the Burst Time\n");
    for ( i = 0; i < p; i++)
      scanf("%d",&bt[i]);


printf("Process\t Burt time \tWaiting Time\t Turn Around Time\n");

  for ( i = 0; i < p; i++)
  {
    wt[i]=0;
    tat[i]=0;

    for (int j = 0; j < i; j++)
      wt[i]+=bt[j];

    tat[i]=wt[i]+bt[i];

    awt+=wt[i];
    atat+=tat[i];
      printf("%d\t %d\t\t %d\t\t  %d\n",i+1,bt[i],tat[i],wt[i]);

  }
  awt/=p;
  atat/=p;
  printf("Average waiting  time %f:\n",awt);
  printf("Average Turn Around Time %f:\n",atat);
}
