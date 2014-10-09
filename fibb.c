/* This program will generate a Fibbonaci series if ten numbers after it is
   given two numbers from the keyboard.
*/
#include <stdio.h>
main()
{
   int counter; /* The counting variable. */
   int bucket1,bucket2,totalnum; /* The bucket mixers and the total */
   int temp; /* tempoary storage */

    counter=0;
     bucket1=0;
     bucket2=0;
        printf("Enter two numbers to compute a Fibonacci sequence.\n\n");
	printf("Enter the first number:");
	scanf("%d",&bucket1);
	printf("\n");
	printf("Enter the second number:");
	scanf("%d",&bucket2);
	printf("\n");
       totalnum=0;
       printf("And now the Fibbonaci Sequence. \n %d %d ",bucket1,bucket2);
       while ( ++counter <= 10 )
         {
           temp=bucket2;
           bucket2=bucket1+bucket2;   /* bucket2 now holds contents of both buckets */
           totalnum=totalnum+bucket2; /* Add contents of bucket2 to total */
           printf(" %d",bucket2);
           bucket1=temp; /* Refill bucket1 with value of old bucket2 */
         }
          printf("   %d\n",totalnum);
      } /* End of main */

