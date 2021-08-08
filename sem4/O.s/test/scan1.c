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

#include <stdio.h>
void main()
{
	int q[25],n,hpos,i,j,k,seek=0,max,diff,temp,q1[20],q2[20],temp1=0,temp2=0;
	float ast;

	printf("Enter the maximum range of Disk: ");
	scanf("%d",&max);

	printf("Enter the number of queue requesteds: ");
	scanf("%d",&n);


	printf("Enter the intial head position: ");
	scanf("%d",&hpos);

	printf("Enter the disk position to be read(queue): ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&temp);

		if(temp>hpos)
		{
			q1[temp1]=temp;
			temp1++;
		}
		else
		{
			q2[temp2]=temp;
			temp2++;
		}
	}

	for(i=0;i<temp1-1;i++)
	{
		for(j=i+1;j<temp1;j++)
		{
			if(q1[i]>q1[j])
			{
				temp=q1[i];
				q1[i]=q1[j];
				q1[j]=temp;
			}
		}
	}

	for(i=0;i<temp2-1;i++)
	{
		for(j=i+1;j<temp2;j++)
		{
			if(q2[i]<q2[j])
			{
				temp=q2[i];
				q2[i]=q2[j];
				q2[j]=temp;
			}
		}
	}

	for(i=1,j=0;j<temp1;i++,j++)
	{
		q[i]=q1[j];
	}

	q[i]=max;

	for(i=temp1+2,j=0;j<temp2;i++,j++)
	{
		q[i]=q2[j];
	}

	q[i]=0;

	q[0]=hpos;

	for(j=0;j<=n;j++)
	{
		diff=absoluteValue(q[j+1]-q[j]);

		seek=seek+diff;

		printf("Disk head moves from position %d to with Seek %d \n",q[j], q[j+1], diff);
	}

	ast=seek/(float)n;

	printf("Total Seek Time= %d/n",seek);
	printf("Average Seek Time=%f/n",ast);

}

int absoluteValue(int x)
{
	if(x>0)
	{
		return x;
	}
	else
	{
		return x*-1;
	}
}
