// 3. WAP To Print 1 to N Using While loop.

#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}	
}
