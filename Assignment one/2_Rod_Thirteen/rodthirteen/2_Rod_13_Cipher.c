#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{

    int i=0,length;
    char plaintext[200];
    printf("\nPlease Enter a input :");
    scanf("%[^\n]",plaintext);

   printf("\nPlain Text is : %s" , plaintext);
   printf("\n Converting to Cipher text...");
   length=strlen(plaintext);

   printf("\nlength of string is %d",length);

   for(i=0;i<length;i++)
   {
       plaintext[i]=plaintext[i]-97;
       plaintext[i]=plaintext[i]+13;
       plaintext[i]=plaintext[i] % 26;
       plaintext[i]=plaintext[i]+97;

   }


  printf("\n\nCipher Text : %s" , plaintext);
  printf("\nThis explains ROD 13\n");

   }


