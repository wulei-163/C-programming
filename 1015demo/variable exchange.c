#include <stdio.h>

int main(int argc, char **argv) {

    int a = 5, b = 6;
    int t;
    t = a;
    a = b;
    b = t;

    printf("a=%d,b=%d\n", a, b);




}