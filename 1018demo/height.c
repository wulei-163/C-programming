#include <stdio.h>

int main(int argc, char **argv) {

double foot,inch;
printf("请输入身高：\n");
scanf("%lf %lf",&foot,&inch);

double height=(foot+inch/12)*0.3048;
printf("身高是%lf\n",height);

return  0;

}
