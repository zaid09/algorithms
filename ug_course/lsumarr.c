#include<stdio.h>
#define MAX 100
 int maxSubArraySum(int a[],int size) {
	int max_so_far =0, max_end_here=0,i;
	for(i=0;i<size;i++) {
	    max_end_here = max_end_here + a[i];
        if (max_end_here < 0)
            max_end_here = 0;
        if (max_so_far < max_end_here)
            max_so_far = max_end_here;
    	}
    return max_so_far;
}

int main()
{
    int a[MAX],i,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter no. of elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int max_sum = maxSubArraySum(a, n);
    printf("Maximum contiguous sum is: %d\n",max_sum);
    return 0;
}
