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
#include<stdio.h>
int main()
{
	int i,limit, total=0,x,counter=0,time_quantum;
	int wait_time =0,turnaround_time=0,arrival_time[10],burst_time[10],temp[10];
	float awt,atat;

	printf("\nEnter Total Number Of Process:\t");
	scanf("%d",&limit);

	x=limit;

	for(i=0;i<limit;i++)
	{
		printf("\nEnter Details of Process[%d]\n",i+1);
		printf("Arrival Time:\t");
		scanf("%d",&arrival_time[i]);
		printf("Burst Time:\t");
		scanf("%d",&burst_time[i]);
		temp[i]= burst_time[i];
	}

	printf("\nEnter Time Quantum:\t");
	scanf("%d",&time_quantum);
	printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Watiting Time\n");

	for(total=0,i=0;x!=0;)
	{
		if(temp[i]<= time_quantum && temp[i]>0)
		{
			total=total +temp[i];
			temp[i]=0;
			counter=1;
		}
		else if(temp[i]>0)
		{
			temp[i]=temp[i]-time_quantum;
			total=total+time_quantum;
		}
		if(temp[i]==0 && counter ==1)
		{
			x--;
			printf("\nProcess[%d]\t\t%d\t\t%d\t\t\t%d",i+1,burst_time[i],total-arrival_time[i],total-arrival_time[i]-burst_time[i]);
			wait_time=wait_time+total-arrival_time[i]-burst_time[i];
			turnaround_time=turnaround_time+total-arrival_time[i];
			counter=0;
		}
		if(i==limit -1)
			i=0;
		else if (arrival_time[i+1]<=total)
			i++;
		else
			i=0;
	}
	awt=wait_time*1.0/limit;
	atat=turnaround_time*1/limit;

	printf("\n\nAverage Wating Time:\t%f",awt);
	printf("\n\nAverage Turnaround Time:\t%f",atat);

	return 0;


}
