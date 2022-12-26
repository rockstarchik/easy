#include "easy.h"
using namespace std;

int itc_sqrt(int num) {
	int i = 0;
	while (i * i < num)
		i++;
	if (i * i == num)
		return i;
	return -1;
}
int itc_skv(int num) {
	if (num <= 0)
		return -1;
	return num * num;
}
int itc_spr(int a, int b) {
	if (a <= 0)
		return -1;
	if (b <= 0)
		return -1;
	return a * b;
}
int itc_str(int a, int b, int c) {
	int S = 1;
	if (a + b <= c || a + c <= b || b + c <= a || a <= 0 || b <= 0 || c <= 0)
		return -1;
	double p = (a + b + c) / 2;
	while (S * S < ((p * (p - a) * (p - b) * (p - c))))
		S++;
	if (S * S == ((p * (p - a) * (p - b) * (p - c))))
		return S;
	return -1;
}

double itc_scir(int radius) {
	double pi = 3.14;
	if (radius < 0)
		return -1;
	return pi * radius * radius;
}