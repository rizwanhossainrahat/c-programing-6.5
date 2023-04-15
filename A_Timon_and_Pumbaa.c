// Timon has a
//  candies and his friend, Pumbaa, has b
//  candies, so Pumbaa asked Timon to tell him the value of a−b
// . However, Timon will tell him the value of a−b
//  if the value is ≥0
// ; otherwise, he will lie and say 0
// . Since it was a hard task for Timon, he's asking for your help.
// Given two numbers a
//  and b
// , find the answer.
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
        if(a>=b)
        {
            printf("%d",a-b);
        }
        else if(a<b)
        {
            printf("%d",0);
        }
    return 0;
}