#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float num1, num2, percent;
	printf("Input your number : ");
	scanf("%f", &num1);
	printf("Input percentage you want to find : ");
	scanf("%f", &percent);
	num2 = num1 * percent / 100;
	printf("%.2f%% of %.2f is %.2f", percent, num1, num2);
	return 0;
}