#include<math.h>
int main(){
float p,r,n,t;
printf("enter p");
scanf("%f",&p);
printf("enter r");
scanf("%f", &r);
printf("enter n");
scanf("%f",&n);
printf("enter t");
scanf("%f", &t);
float a;
a=(1+(r/n));
float b;
b=n*t;
float x;
x=pow(a,b);
float A;//A is final amount
A= p*x;
printf("the compound interest is%f", A);
return 0;
}
