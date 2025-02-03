// Assignment Operators
// Problem:Write a program that demonstrates the use of all assignment operators (=,+=,-=,*=,/=,%=). 
// Perform these operations on an integer and display the results after each operation.
#include <stdio.h>

int main()
{
    int a=10;
    printf("assignment operator is using value is: 10\n");
    int b,c;
    printf("Enter the b: ");
    scanf("%d",&b);
    printf("Enter the c: ");
    scanf("%d",&c);
    
    //printf("\n= operator is:%d",b=c);
    printf("\n+= operator is:%d",b+=c);
    printf("\n-= operator is%d",b-=c);
    printf("\n*= operator is:%d",b*=c);
    printf("\n/= operator is:%d\n",b/=c);
    
    printf("current value b is :%d\n",b);
    printf("current value c is:%d",c);
    
// int a=10
// a%=2;
// printf("%d",a);
    return 0;
}
