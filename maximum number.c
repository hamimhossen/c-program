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

    int max=arr[0];
    for(int i=1; i<n; i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("The maximum number is: %d\n", max);

    return 0;
}
