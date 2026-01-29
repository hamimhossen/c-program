#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[100],sum=0;

    printf("Enter array element: ");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }

    printf("Sum of array: %d\n",sum);

    return 0;

}
