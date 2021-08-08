#include<Stdio.h>
#define max 30
void main()
{
  int i,j,p,t,pn[max],at[max],bt[max],tat[max],wt[max],ct[max];
  float awt=0,atat=0;

  printf("Enter the number of process\n");
  scanf("%d",&p);


  printf("Enter the Process number\n");
    for ( i = 0; i < p; i++)
      scanf("%d",&pn[i]);

  printf("Enter the Burst Time\n");
    for ( i = 0; i < p; i++)
      scanf("%d",&bt[i]);

  //Bubble sort by BT

      for ( i = 0; i < p; i++){
        for ( j = 0; j < p-i-1; j++)
        {
          if(bt[j]>bt[j+1])
          {
           t=bt[j];
           bt[j]=bt[j+1];
           bt[j+1]=t;

           //process number sorting
           t=pn[j];
           pn[j]=pn[j+1];
           pn[j+1]=t;
         }
        }
      }

printf("Process\t Burt time\t Waiting Time\t Turn Around Time \n");

  for ( i = 0; i < p; i++)
  {
    wt[i]=0;
    tat[i]=0;

    for ( j = 0; j < i; j++)
      wt[i]+=bt[j];

    tat[i]=wt[i]+bt[i];

    awt+=wt[i];
    atat+=tat[i];
      printf("%d\t %d\t\t %d\t\t  %d\n",pn[i],bt[i],wt[i],tat[i]);

  }
  awt/=p;
  atat/=p;
  printf("Average waiting  time %f:\n",awt);
  printf("Average Turn Around Time %f:\n",atat);


}
