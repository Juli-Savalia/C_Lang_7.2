//5 4 3 2 1
//  4 3 2 1
//    3 2 1
//      2 1
//        1

#include<stdio.h>

void main()
{
	int i,j,s;
	
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=i;s++)
		{
			printf("  ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
