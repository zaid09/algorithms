#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   int n, max, num, c;
 
   printf("Enter the number of random numbers to generate\n");
   scanf("%d", &n);
 
   printf("Enter the maximum value of random number\n");
   scanf("%d", &max);
 
   printf("%d Random numbers from 0 to %d are :-\n", n, max);
 
   for (c = 1; c <= n; c++)
   {
      num = rand()%max +1;
      printf("%d\n",num);         
   }

   return 0;
}
