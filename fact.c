/* Program by Norman King, November 2,1987
   This program computes a factorial
*/
#include <stdio.h>

float factorial(number)
int number;
{
int i;
float sum=1;
   if (number>0)
    for (i=1 ; i<number+1 ; ++i)
     sum*=i;
  if (number==0)
   sum=1;
 return(sum);
}

main()
{char ch;
 int number;
 float fact;
 printf("Do you want to compute a factorial (y/n) ?\n");
  ch=getchar();
  if ( (ch=='y')||(ch=='Y') )
   {
     printf("Enter a integer number on the line below.\n");
      scanf("%d",&number);
       fact=factorial(number);
        printf("The factorial of %d!, is %8.0f.\n",number,fact);
   }
   else
   printf("Then why did you run this program?");
}

