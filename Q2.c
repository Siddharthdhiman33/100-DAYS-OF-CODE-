//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
     int a,b,sum,difference,product,quotient;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    sum = a+b;
    difference = a-b;
    product = a*b;
    quotient= a/b;
    printf("Sum :%d\n",sum);
    printf("difference:%d\n",difference);
    printf("product :%d\n",product);
    printf("quotient:%d\n",quotient);
    return 0;
}