/* This program will read up to 20 integers from the keyboard and store them
   into and array, diaplay them and then sort the array into ascending order
   then print them out.
   Program #7 by Norman King 11-16-87
*/
#define max 20
#include <stdio.h>
main()
{
int number[20];
int temp,count,i,j;
count=1;
printf("This program stops reading numbers after %d values\n",max);
printf("or if an EOF character is entered.\n");
 scanf("%d",&number[count]);
while(count<=20 && number[count]>=0)
 { count+=1;
    scanf("%d",&number[count]); /* Getint() would not work right */
  printf("The number %d has been acepted.\n",number[count]);
 }
  printf("All %d elements of the array were filled.\n",count);
  for(i=1; i<count ; i++)

 /* Now to sort them, useing a bubble sort. How drol! */
 /* Sort() would not work right eather. Interesting. */
for (j=1; j< count-1 ; j++)
 for(i=2; i< count ; i++)
  { if ( number[i-1] > number[i])
     {
     temp=number[i-1];
     number[i-1]=number[i];
     number[i]=temp;
     }
  }
 /* I wouldn't trust the Turbo C library farther than I could throw an
    IBM system/38 main console and all of it's terminals! */
 for (i=1; i< count ; i++)
   printf("Integer number %d is %d \n",i,number[i]);
    
}
