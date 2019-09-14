#include<stdio.h>
intmain()
{
int add,mul,div,sub,num1,num2;
printf("enter num1:\n);
scanf("%d",num1);
printf("enter num2:\n);
scanf("%d",num2);
add=num1+num2;
sub=num1-num2;
mul=num1*num2;
div=num1\num2;

printf("%d %d %d %d\n",add,sub,mul,div);
return 0;
}
