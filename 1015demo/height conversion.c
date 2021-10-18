#include <stdio.h>

int main(int argc, char **argv) {

double foot;
double inch;
printf("请分别输入身高的英尺和英寸\n");  
scanf("%lf %lf",&foot,&inch);
printf("身高是%lf米\n",(foot+inch/12)*0.3048);
}
