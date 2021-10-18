#include <stdio.h>

int main(int argc, char **argv) {

int a,b,c,d,f;

scanf("%d",&a);
b=a/100;
d=a%10;
c=a%100/10;


a=d*100+c*10+b;
printf("%d\n",a);




}
