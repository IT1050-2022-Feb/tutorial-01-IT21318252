/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark , total = 0 ,x , average;

  for(x=1 ; x<3 ; x++)
    {
      printf("Enter the mark %d : ",x);
      scanf("%d", &mark);

      total = total + mark;
    }
  average= total/2;
  printf("Average mark : %d", average);
  
  return 0;
}

