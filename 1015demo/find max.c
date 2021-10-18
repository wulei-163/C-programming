#include <stdio.h>

int main(int argc, char **argv) {

int a,b,max;
printf("请输入两个数\n");
scanf("%d %d",&a,&b);
if(a>b){
    max=a;
}
else{
    max=b;
}

printf("大的数是%d\n",max);

}
