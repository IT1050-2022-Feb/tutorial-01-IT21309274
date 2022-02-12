/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int x1, int x2);
int maximum(int y1, int y2);
int multiply(int z1, int z2);


int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum(int x1, int x2)
{
  if(x1 > x2)
  {
    return x2 ;
  }
  else
  {
    return x1 ;
  }
}

int maximum(int y1, int y2)
{
  if(y1 > y2)
  {
    return y1 ;
  }
  else
  {
    return y2 ;
  }
}

int multiply(int z1, int z2)
{
  return z1 * z2 ;
}