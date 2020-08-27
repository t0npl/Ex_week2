#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float m, c;
	printf("input m value : ");
	scanf("%f", &m);
	printf("input c value : ");
	scanf("%f", &c);
	printf("Your equation is \"y = %.2fx + %.2f\"", m, c);
	return 0;
}