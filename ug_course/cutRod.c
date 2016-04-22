#include<stdio.h>
#include<limits.h>

int max(int a, int b) { return (a > b)? a : b;}
 
int cutRod(int price[], int n)
{
   int i;
   if (n <= 0)
     return 0;
   int max_val = INT_MIN;
   for (i = 0; i<n; i++)
         max_val = max(max_val, price[i] + cutRod(price, n-i-1));
 
   return max_val;
}
int main()
{
    int size, arr[50]; 
    int i; 
    printf("Enter Size of rod:");
    scanf("%d",&size);
    printf("Enter the prices of the pieces:");
    for(i=0;i<size;i++)
      scanf("%d",&arr[i]);
    printf("Maximum Obtainable Value is %d\n", cutRod(arr, size));
    getchar();
    return 0;
}