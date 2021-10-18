#include <stdio.h>

int main(int argc, char **argv) {

int number;
int n=0;
scanf("%d",&number);

do{
    number/=10;
    n++;
}while(number>0);

printf("你输入的数是%d位数\n",n);
return 0;

}
