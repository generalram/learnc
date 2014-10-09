/* Program by Norman King, revised November 2, 1987 */
#include <stdio.h>
#include <math.h>
#define days 7
#define cows 20
int i,j;
double aveday[cows],mean,sdev,sum,sum2,diff,temp1;
double milk[cows][days]= {
{0,2,1,8,2,6,2},
{2,7,2,3,2,6,2},
{7,8,2,3,4,2,2},
{1,6,3,2,5,2,2},
{3,2,4,2,4,2,2},
{2,2,2,2,5,2,2},
{9,2,9,2,5,2,0},
{2,2,2,2,5,2,2},
{8,6,2,6,2,2,0},
{2,2,2,2,2,2,2},
{5,2,6,7,2,2,0},
{2,7,2,5,2,3,2},
{2,3,2,3,2,3,2},
{2,2,3,2,3,2,3},
{8,2,7,2,2,5,3},
{2,6,2,7,2,5,3},
{2,5,2,5,2,0,2},
{2,7,5,2,6,2,3},
{2,0,2,2,0,2,2},
{8,2,7,2,6,2,3} };
main()
{
  sum=0;
 for (i=0 ; i < cows ; ++i)
  for(j=0 ; j < days ; ++j)
    sum+=milk[i][j];
  mean=sum/(days*cows);
  for (j=0 ; j < cows ; ++j)
  {
  sum2=0;
  for (i=0 ; i < days ; ++i)
    sum2+=milk[j][i];
  aveday[j]=sum2/days;
  }
  diff=0;
  for (i=0 ; i<cows ; ++i)
  for (j=0 ; j<days ; ++j)
  diff+=(milk[i][j]-mean)*(milk[i][j]-mean);
  temp1=diff/((days*cows)-1);
  sdev=sqrt(temp1);
   for (i=0; i<cows ; ++i)
    printf("Daily average for cow #%d= %5.2f\n",i+1,aveday[i]);
   printf("Daily average for the heard = %5.2f\n",mean);
    printf("Standard deviation = %5.2f\n",sdev);
}
