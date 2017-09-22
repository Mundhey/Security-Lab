#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i=0,length;
    char plaintext[200];
    int temp=0;

   printf("\nPlease Enter a input :");
   scanf("%[^\n]",plaintext);


   printf("\nPlain Text is : %s" , plaintext);

   printf("\n Converting to Cipher text...");

   length=strlen(plaintext);



   printf("\nlength of string is %d",length);

   for(i=0;i<length;i++)
   {
       plaintext[i]=plaintext[i]-97;
       temp=25-plaintext[i];
       plaintext[i]=temp;
       plaintext[i]=plaintext[i]+97;


   }


  printf("\n\nCipher Text : %s" , plaintext);

   printf("\nThis explains Atbash cipher\n");
    return 0;
}
