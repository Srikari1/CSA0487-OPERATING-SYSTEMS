/* Consider a file system where the records of the file are stored one after another both physically and logically. A record of the file can only be accessed by reading all the previous records.  Design a C program to simulate the file allocation strategy. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int f[50], i, st, len, j, c, k, count = 0;
	
	for(i=0;i<50;i++)
	f[i]=0;
	
	printf("Files Allocated are : \n");

x : count=0;

	printf("Enter starting block and length of files: ");
	scanf("%d%d", &st,&len);

	for(k=st;k<(st+len);k++)
		if(f[k]==0)
			count++;	

	if(len==count)
	{
		for(j=st;j<(st+len);j++)	
			if(f[j]==0)
			{
				f[j]=1;
				printf("%d\t%d\n",j,f[j]);
			}

		if(j!=(st+len-1))
			printf("The file is allocated to disk\n");
	}
	else
		printf("The file is not allocated \n");

	printf("Do you want to enter more file(Yes - 1/No - 0)");
	scanf("%d", &c);

	if(c==1)
		goto x;	
	else
		exit(0);

	getch();

	return 0;
}
