// A number of two digits is lucky if one of its digits is divisible by the other.

// For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

// Given a number between 10 and 99, determine whether it is lucky or not.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=n%10,b=n/10;
    // a==n%10;
    // b==a%10;
    if(a%b==0 || b%a==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}