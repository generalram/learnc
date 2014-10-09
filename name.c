#include <stdio.h>
/* This program will read a name from the keyboard and write to the screen
   "Hello" followed by the name given.
*/
void main()
{
  char name[20];
  printf("What is your name? ");
  scanf("%s",name);
  printf("Hello, %s.\n",name);
}
