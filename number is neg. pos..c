#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    if(n>0)
        printf("Positive");
    else if(n<0)
        printf("Negative");
    else
        printf("Zero");
    return 0;
}
