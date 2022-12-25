#include "easy.h"
using namespace std;

int itc_sqrt(int num) {
	int i = 0;
	if (num < 0)
		return -1;
	while (i * i < num)
		i++;
	return i;
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
	int p, S;
	p = (a + b + c) / 2;
	S = 0;
	if (a <= 0 || b <= 0 || c <= 0)
		return -1;
	if ((a + b) > c && (b + c) > a && (a + c) > b) {
		p = (p * (p - a) * (p - b) * (p - c));
		S = itc_sqrt(p);
		return S;
	}
	return -1;
}
double itc_scir(int radius) {
	int pi = 3.14;
	if (radius <= 0)
		return -1;
	return pi * radius * radius;
}