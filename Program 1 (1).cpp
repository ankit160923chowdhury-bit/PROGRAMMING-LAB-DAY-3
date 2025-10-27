#include<stdio.h>
int main(){
int number;
printf("Enter a number");
scanf("%d",&number);
int lastdigit1;
lastdigit1 = number %10;
printf("the last digit of %d is %d\n", number, lastdigit1);
int x;
x=number/10;
int lastdigit2;
lastdigit2 =number -(10*x);
printf("the last digit is %d\n", lastdigit2);
}
