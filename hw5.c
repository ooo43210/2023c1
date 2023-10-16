#include <stdio.h>

void binary_2(int n)
{
    if (n>1){
        binary_2(n/2);
    }
    printf("%d",n%2);
}

int main(void)
{
    int num;

    do
    {
        printf("양수인 정수 입력하세요: ");
        scanf("%d",&num);
    } while (num <= 0 );

    printf("2진수로 변환한 값: ");
    binary_2(num);
    printf("\n");
    
    return 0;
}