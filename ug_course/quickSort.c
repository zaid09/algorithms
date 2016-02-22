#include<stdio.h>
 
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int l, int h)
{
    int x = arr[h];  
    int i = (l - 1); 
    int j;
    for (j = l; j <= h- 1; j++)
    {

        if (arr[j] <= x)
        {
            i++;  
            swap(&arr[i], &arr[j]);  
        }
    }
    swap(&arr[i + 1], &arr[h]);  
    return (i + 1);
}

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, h);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[100];
    int n,i;
    printf("Enter Size:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
