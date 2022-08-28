#include<stdio.h>
#include"swap.h"

int main(void)
{
 int num1,num2;
 printf("Enter the first number:");
 scanf("%d",&num1);
 putchar('\n');
 printf("Enter the second number:");
 scanf("%d",&num2);

 printf("\nBefore swap:Num1:%d Num2:%d\n",num1,num2);
 swap(&num1,&num2);
 printf("\nAfter swap:Num1:%d Num2:%d",num1,num2);
 
 return 0;
}   