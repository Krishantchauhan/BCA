int n,i,h,tr;

	printf("Enter the total number of tracks ");
	scanf("%d",&tr);

	printf("Enter the total number of tracks requested ");
	scanf("%d",&n);

	printf("Head is initialized at ");
	scanf("%d",&h);

	int t[n];

	printf("Enter the requested tracks ");
	for(i=0;i<n;i++)
		scanf("%d",&t[i]);

	int t2[n];

	for(i=0;i<n;i++)
		t2[i]=t[i];

	int h2=h,c,thm=0;

	while(h2!=tr)
	{
		for(i=0;i<n;i++)
		{
			if(h2==t[i] && t2[i]==0)
			{
				printf("servicing request on track %d\n",t[i]);
				t2[i]=0;
				break;
			}
		}
		h2++;
	}
	thm=thm+h2-h;
	h=h2;
	while(h2!=0)
	{
		for(i=0;i<n;i++)
		{
			if(h2==t[i]&&t2[i]!=0)
			{
				printf("servicing request on track %d\n",t[i]);
				t2[i]=0;
				thm=thm+h-t[i];
				h=t[i];
				break;
			}
		}
		h2--;
	}

	printf("Total Seek Time %d",thm);
	printf("\nAverage Seek Time %d ",thm/n);
