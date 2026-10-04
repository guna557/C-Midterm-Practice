// Created by DELL on 02-10-2026.
#include<stdio.h>
int main() {
    float x=1232.34754f;
    printf("%.5f\n",x);//Output is 1232.34753
    float y=12.3456789;
    printf("%f\n",y);//Output is 12.345679
    float z=12.3456789;
    printf("%.9f\n",z);//12.345679283
    double a=12.3456789;
    printf("%.7f",a);//12.345679
    return 0;
}

