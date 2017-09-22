#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i=0,length;
    char plaintext[200],key[200];
    int r;
    time_t t;

    printf("\nPlease Enter a input :");
    scanf("%s",plaintext);

    printf("\nPlain Text is : %s" , plaintext);
    printf("\n Converting to Cipher text...");

    length=strlen(plaintext);

    srand((unsigned) time(&t));

    for(i=0;i<length;i++)
   {
       plaintext[i]=plaintext[i]-97;

       r=rand() % 26;

       printf("\n%d",r);



       plaintext[i]=plaintext[i]+r;

       plaintext[i]=plaintext[i]%26 ;
       plaintext[i]=plaintext[i]+97;


       key[i]=r+97;
   }
     key[i]='\0';

     printf("\nThe Cipher text is : %s ",plaintext);
     printf("\n The key is : %s ", key);

    return 0;
}
