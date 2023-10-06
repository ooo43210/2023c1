#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 1 이하의 수는 소수가 아님
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // 소수가 아님
        }
    }
    return 1; // 소수임
}

int main(void) {
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("It is a prime number.\n");
    } else {
        printf("It is not a prime number.\n");
    }

    return 0;
}
