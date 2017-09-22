#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{

int i=0,length;
char plaintext[200]="GAATTCGCGGGCCGCAATTAACCCTCACTAAAGGGATCTCTAGAACT";

printf("The plaintext is\n");
printf("%s",plaintext);

length=strlen(plaintext);
printf("\nLength of plain text is\n");
printf("\n%d",length);

for(i=0;i<length;i++)
   {
       if(plaintext[i]==65)
        plaintext[i]=67;
       else if(plaintext[i]==67)
        plaintext[i]=71;
       else if(plaintext[i]==71)
        plaintext[i]=84;
       else if(plaintext[i]==84)
        plaintext[i]=65;

   }

   printf("\nThe Cipher Text is\n");

   printf("%s\n",plaintext);







}
