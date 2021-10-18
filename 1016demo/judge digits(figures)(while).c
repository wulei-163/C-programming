#include <stdio.h>

int main(int argc, char **argv) {

int number;
int n=0;
printf("请输入一个数\n");
scanf("%d",&number);
printf("你输入的数是%d\n",number);

n++;
number=number/10;    //number/=10;
while(number>0){
    n++;
    number=number/10;    //number/=10;
}

printf("你输入的数是%d位数\n",n);
return 0;

}
