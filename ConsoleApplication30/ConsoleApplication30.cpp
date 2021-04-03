#include<stdio.h>
int main(void)
{
    int KRW = 0, rate = 0;

    printf("KRW?");
    scanf_s("%d", &KRW);

    printf("원달러환률");
    scanf_s("%d", &rate);


    printf("KRW %d=USD%0.2lf", KRW, double(KRW) / double(rate));
}