#include <stdio.h>

void max_heapify(int *a, int i, int n)
{
    int j, temp;
    temp = a[i];
    j = 2 * i;
    while (j <= n)
    {
        if (j < n && a[j+1] > a[j])
            j = j + 1;
        if (temp > a[j])
            break;
        else if (temp <= a[j])
        {
            a[j / 2] = a[j];
            j = 2 * j;
        }
    }
    a[j/2] = temp;
    return;
}
void build_maxheap(int *a,int n)
{
    int i;
    for(i = n/2; i >= 1; i--)
    {
        max_heapify(a,i,n);
    }
}
int main()
{
    int n, i, x;
    int a[20];
    printf("enter array size:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for (i = 1; i <= n; i++)
    {
       scanf("%d",&a[i]);
    }
    build_maxheap(a,n);
    printf("Max Heap:\t");
    for (i = 1; i <= n; i++)
    {
        printf("%d\t",a[i]);
    } printf("\n");
return 0;
}
