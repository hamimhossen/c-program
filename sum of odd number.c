#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[100],sum=0;

    printf("Enter array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            sum = sum + arr[i];
        }
    }

    printf("The Sum of odd number: %d\n",sum);

    return 0;
}
