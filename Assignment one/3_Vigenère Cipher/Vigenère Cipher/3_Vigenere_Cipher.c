#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{   int i=0,length_pt,length_k;
    char plaintext[200],key[200];

   printf("\nPlease Enter a input :");
   scanf("%[^\n]",plaintext);


   printf("\nPlain Text is : %s" , plaintext);

   printf("\n Enter the key of same length\n");
   scanf("%s",key);

   printf("\n Converting to Cipher text...");

   length_pt=strlen(plaintext);
   length_k=strlen(key);


   if(length_pt != length_k)
   {
       printf("\n The key size & plain text size is not same \n");
       exit(0);
   }

   for(i=0;i<length_pt;i++)
   {
       plaintext[i]=plaintext[i]-97;
       key[i]=key[i]-97;
       plaintext[i]=((plaintext[i]+ key[i]) % 26 ) + 97  ;

   }


    printf("\n\nCipher Text : %s" , plaintext);


    printf("\nThis explains Vigenère Cipher \n");



    return 0;
}
