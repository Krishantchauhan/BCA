#include<Stdio.h>
#define max 30
void main(){
  int i,t,j,p,at[max],bt[max],tat[max],wt[max],ct[max],pn[max];
  float awt=0,atat=0;

  printf("Enter the number of process\n");
  scanf("%d",&p);

  printf("Enter the Process number\n");
    for ( i = 0; i < p; i++)
      scanf("%d",&pn[i]);

  printf("Enter the Burst Time\n");
    for ( i = 0; i < p; i++)
      scanf("%d",&bt[i]);

  printf("Enter the Arrival Time\n");
    for ( i = 0; i < p; i++)
      scanf("%d",&at[i]);

      for ( i = 0; i < p ;i++){
        for ( j = 0; j <p-i-1; j++)
        {
          if(bt[j]>bt[j+1])
          {
            t=at[j];
            at[j]=at[j+1];
            at[j+1]=t;

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

  ct[0]=0;
printf("Process\t Burt time\t Arrival Time\t Complection Time \tWaiting Time\t Turn Around Time\n");


for ( i = 0; i < p; i++)
{
  if(at[i]<=ct[i])
    ct[i+1]=ct[i]+bt[i];
  else
    ct[i+1]=at[i]+bt[i];
}
  for ( i = 0; i < p; i++)
  {
    wt[i]=0;
    tat[i]=0;
    tat[i]=ct[i+1]-at[i];
    wt[i]=tat[i]-bt[i];

    awt+=wt[i];
    atat+=tat[i];
      printf("%d\t %d\t\t %d\t\t %d\t\t\t %d\t\t %d\n",pn[i],bt[i],at[i],ct[i+1],wt[i],tat[i]);

  }
  awt/=p;
  atat/=p;
  printf("Average waiting  time %f:\n",awt);
  printf("Average Turn Around Time %f:\n",atat);
}
