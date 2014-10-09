/* This program will use a function to convert a string of characters
   into uppercase, the function will be given one character at a time
*/
#include <stdio.h>
#include <string.h>
main()
{
int count,lenstring;
char word[40];
printf("Enter a character string up to 40 characters on the next line:\n");
scanf("%s",word);
count=0;
lenstring = strlen(word);
printf("%d\n", lenstring);
while(count < lenstring)
 {
   if(word[count]>='a' && word[count]<='z')
   word[count]-=' '; /* Subtract 32 from word, ascii code for ' ' is 32 */
   count+=1;
 }
printf("Here is your text back in upercase form:\n%s",word);
printf("\n");
}
