/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1, m2 ;
  float avge ;

  printf ("Enter mark 1 : ");
  scanf("%d", &m1);

  printf ("Enter mark 2 : ");
  scanf("%d", &m2);

  avge = (m1 + m2)/2.0 ;
 
printf ("Average is : %.2f", avge);

  
  return 0;
}

