#include<stdio.h>
int main()
{
    int arr[100],n;

    printf("Enter any number: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int min=arr[0];
    for(int i=1; i<n; i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    printf("The minimum number is: %d\n", min);

    return 0;
}

