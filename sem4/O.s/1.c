/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here


//SJF
#include <stdio.h>
#define max 30
int main(){
	int i,j,p,t,pn[max],bt[max],tat[max],wt[max],ct[max];
	float awt=0;

	printf("Enter the Number of Process\n:");
	scanf("%d",&p);

		printf("Enter the Process Time\n:");
		for(i=0;i<p;i++)
		scanf("%d",&pn[i]);

	printf("Enter the Burst Time\n:");
	for(i=0;i<p;i++)
		scanf("%d",&bt[i]);

	for(i=0;i<p;i++){
		for(j=0;j<p-i-1;j++){
			if(bt[j]>bt[j+1]){
				t=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=t;

				t=pn[j];
				pn[j]=pn[j+1];
				pn[j+1]=t;
			}
		}
	}
	printf("Process \t Burst Time\t Wating Time \t Turnaround Time\n");
	for(i=0;i<p;i++){
		wt[i]=0;
		tat[i]=0;

		for(j=0;j<i;j++)
			wt[i]+=bt[j];

		tat[i]=wt[i]+bt[i];

		awt+=wt[i];

		printf("%d\t %d\t %d\t %d\t \n",pn[i],bt[i],wt[i],tat[i]);
	}
	awt/=p;
	printf("Average Wating Time %f =",awt);
}
