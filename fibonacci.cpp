#include<stdio.h>
 
int Fibonacci(int);
 
int main()
{
   int n, i = 0, c;
    printf("Enter number of terms: ");
   scanf("%d",&n);
 
   printf("Fibonacci series: ");
 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d ", Fibonacci(i));
      i++; 
   }
    printf("\n");
   return 0;
}
 
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 