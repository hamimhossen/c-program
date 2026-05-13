#include<stdio.h>
int main()
{
    int num, count=0;

    printf("Enter any number: ");
    scanf("%d",&num);

    for(int i=2; i<num; i++){
        if(num % i == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        printf("The number is prime\n");
    }
    else{
        printf("The number is not prime\n");
    }

    return 0;
}
