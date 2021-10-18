#include <stdio.h>

int main(int argc, char **argv) {

int score;
printf("请输入成绩\n");
scanf("%d",&score);
printf("你输入的成绩是%d\n",score);

if(score>60){
    printf("你及格了\n");
}
else{
    printf("你的成绩不及格\n");
}



}
