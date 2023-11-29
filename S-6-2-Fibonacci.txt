#include<stdio.h>
int main()
{
   int a=0, b=1, n, c, x, sum=0;

   printf("Enter  a n: ");
   scanf("%d",&n);
	x=0;
   printf("The fibonacci series is: \t");
   while( x <= 2*n)
   {
      printf("%d\t",a);
      if(x%2==0)
	  sum += a;
      c = a + b;
      a = b;
      b = c;
      x=x+1;
   }

   printf("\nTheir sum is = %d", sum);

   return 0;
}
