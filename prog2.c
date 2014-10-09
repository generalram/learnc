#include <stdio.h>

main()
{
int bucket1, bucket2;
int totalnum, counter;
int temp;
int bstop;
char string1[81];

bucket1 = 0;
bucket2 = 0;
totalnum = 0;
counter = 0;
bstop = 0;

while(bstop == 0) {

	printf("Enter two numbers to compute a Fibonacci sequence.\n\n");
	printf("Enter the first number:");
	scanf("%d",&bucket1);
	printf("\n");
	printf("Enter the second number:");
	scanf("%d",&bucket2);
	printf("\n");

	totalnum = bucket1 + bucket2;

	printf("And now the Fibonacci sequence\n");

	printf("%d %d", bucket1, bucket2);

	for (counter = 0; counter < 10; counter++)
	{
		temp = bucket2;
		bucket2 = bucket1 + bucket2;
		totalnum = bucket2 + totalnum;
		printf(" %d", bucket2);
		bucket1 = temp;
	}


	printf("\nTotal = %d\n", totalnum);
	printf("\nDo you want to compute another sequence? (Y/N):");
	scanf("%s",string1);
	printf("\n");
	if (string1[0] == 'Y')
		bstop=0;
	else
		bstop=1;
	
	} 
return 0;
}
