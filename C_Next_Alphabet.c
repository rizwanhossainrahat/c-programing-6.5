// Given a lowercase alphabet character. You have to print the next character in the alphabet.
#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if(n>='a' && n<'z' )
    {
        n++;
        printf("%c",n);
        
    }
   else if(n=='z')
   {
   printf("%c",'a');
   }
    
    
    
    return 0;
}