#include <stdio.h>
#include <math.h>

// 표준편차를 계산하는 함수
double calculateStandardDeviation(double arr[], int n) {
    double mean = 0.0, sum = 0.0;

    // 평균 계산
    for (int i = 0; i < n; i++) {
        mean += arr[i];
    }
    mean /= n;

    // 각 원소와 평균의 차이를 제곱하여 합산
    for (int i = 0; i < n; i++) {
        sum += pow(arr[i] - mean, 2);
    }

    // 분산을 n으로 나누고 루트를 씌워 표준편차 계산
    double standardDeviation = sqrt(sum / n);
    return standardDeviation;
}

int main() {
    double numbers[5];

    // 사용자로부터 5개의 실수 입력 받기
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &numbers[i]);
    }

    // 표준편차 계산 및 출력
    double stdDev = calculateStandardDeviation(numbers, 5);
    printf("Standard Deviation = %.3lf\n", stdDev);

    return 0;
}
