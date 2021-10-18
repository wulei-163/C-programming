#include <stdio.h>

int main(int argc, char **argv) {

int hour1,minute1;
int hour2,minute2;
printf("请输入两个时间：\n");
scanf("%d %d",&hour1,&minute1);
scanf("%d %d",&hour2,&minute2);

int t1=hour1*60+minute1;
int t2=hour2*60+minute2;

int t=t2-t1;
//int t1=hour1*60+minute1;
//int t2=hour2*60+minute2;

printf("时间差是%d小时%d分钟",t/60,t%60);

return 0;
}
