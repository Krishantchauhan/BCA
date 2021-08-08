#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 30
void main()
{
    int et[max],at[max],n,i,t=0,j,temp,st[max],ct[max],wt[max],ta[max];
    int totwt=0,totta=0;
    float awt,ata;
    int pn[max],a[max];
    //clrscr();
    printf("Enter the number of process:");
    scanf("%d",&n);

    printf("Enter the Process number\n");
      for ( i = 0; i < n; i++)
        scanf("%d",&pn[i]);

    printf("Enter the Arrival Time\n");
        for ( i = 0; i < n; i++)
        scanf("%d",&at[i]);

    printf("Enter the Burst Time\n");
      for ( i = 0; i < n; i++)
        scanf("%d",&et[i]);


        for ( i = 0; i < n; i++){
          for ( j = 0; j < n-i-1; j++)
          {
            if(et[j]>et[j+1])
            {
              t=at[j];
              at[j]=at[j+1];
              at[j+1]=t;

             t=et[j];
             et[j]=et[j+1];
             et[j+1]=t;

             //process number sorting
             t=pn[j];
             pn[j]=pn[j+1];
             pn[j+1]=t;
           }
          }
        }

      printf("\nPname\tarrivaltime\texecutiontime\twaitingtime\ttatime");
    for(i=0; i<n; i++)
    {
        if(i==0)
            st[i]=at[i];
        else
            st[i]=ct[i-1];
// printf(" st=%d\n",st[i] );

        // wt[i]=st[i]-at[i];
        // ct[i]=st[i]+et[i];
        // ta[i]=ct[i]-at[i];

        ta[i]=st[i]-at[i];
        wt[i]=ta[i]-et[i];

        totwt+=wt[i];
        totta+=ta[i];
        printf("\n%d\t%5d\t\t%5d\t\t%5d\t\t%5d\t\t%5d",pn[i],at[i],et[i],wt[i],ta[i],ct[i]);
    }
    awt=(float)totwt/n;
    ata=(float)totta/n;

    printf("\nAverage waiting time is:%f",awt);
    printf("\nAverage turnaroundtime is:%f",ata);
    getch();
}
