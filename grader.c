#include <stdio.h>
#define CSIZE 4
struct num{
	char first[20],second[20];};
struct student{
	struct num name;
	float grade[3],ave;};
struct student students[CSIZE];
main()
{
void findscore(),print(),printclass();
int i=0;
 students[i].name.first[0]='\0'; /* Just to have a default to start the loop */
while (students[i].name.first[0]!='*' && i<=CSIZE)
 {
printf("Enter student data, use * for last record\n");
++i;
findscore(&students[i]);
if (students[i].name.first[0]!='*' && i<=CSIZE)
print(students[i]);
}

printclass(i);
}

float average(person)
struct student *person;
{
   int i ;
   float sum=0;
	for (i=0;i<3;++i)
          sum+=person->grade[i];
           sum/=3;
	return(sum);
}

void findscore(person)
struct student *person;
{
int i;
printf("Enter first name: ");
scanf("%s",person->name.first);
if(person->name.first[0]!='*')
{
printf("Enter last name: ");
scanf("%s",person->name.second);
printf("You entered the name %s %s.\n",person->name.first,person->name.second);
for (i=0 ; i<3 ; i++)
{
printf("Enter grade # %d: ",i+1);
scanf("%f",&person->grade[i]);
printf("Grade you entered was %5.2f\n",person->grade[i]);
}
person->ave=average(person);
printf("The average of this person is %5.4f. \n",person->ave);
}
}

void print(person)
struct student person;
{ int i;
	printf("Student name : %s  %s\n",person.name.first,person.name.second);
		for (i=0;i<3;++i)
			printf("Score # %d = %5.2f ",i+1,person.grade[i]);
			printf("Average = %5.2f ",person.grade[i]);
}

void printclass(max)
int max;
{
int i,j;
float sum=0;
max-=1;
printf("Max = %i.\n",max);
for (i=1;i<=max;++i)
for (j=0;j<3;++j)
{
sum+=students[i].grade[j];
}
sum/=max*3;
printf("The class average is %3.2f\n",sum);
}
