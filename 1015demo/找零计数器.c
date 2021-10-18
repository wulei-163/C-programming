#include <stdio.h>

int main(int argc, char **argv) {

int price;
int bill;

printf("请输入金额\n");
scanf("%d",&price);
printf("请输入票面\n");
scanf("%d",&bill);

if(bill>=price){
    printf("应该找您%d\n",bill-price);
    }
else{
    printf("你的钱不够\n");
}



}
