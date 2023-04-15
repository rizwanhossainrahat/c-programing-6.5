// The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:

// Two eyes and one body.
// Two eyes, one mouth, and one body.
// One eye, one mouth, and one body.
// If the king has n
//  eyes, m
//  mouths and k
//  bodies, what is the largest number of Katryoshkas he can make?

#include<stdio.h>
int main()
{
   long long int e,m,b,result=0;
    scanf("%lld %lld %lld",&e,&m,&b);
    
    if(e==0 || b==0)
    {
      printf("0\n");
    }
    else
    {
      long long int minimum=e;
      if(m<minimum)
      {
        minimum=m;
      }
      if (b<minimum)
      {
        minimum=b;
      }
      e-=minimum;
      m-=minimum;
      b-=minimum;
      result=minimum;
      if(e/2<b)
      {
        result+=e/2;
      }
      else
      {
        result+=b;
      }
       printf("%lld\n",result);
    }
   

    return 0;
}