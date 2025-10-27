1 #include<stdio.h>
int main(){
int n, a1, a2;
printf("enter the number: ");
scanf("%d",&n);
a1=n%10;
printf("last digit using modulus function: %d\n", a1);
a2=n-(n/10)*10;
printf("last digit without using modulus function: %d",a2);
return 0;
}
