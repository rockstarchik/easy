#include "easy.h"
using namespace std;

void itc_name() {
    cout << "Ira" << endl;
}

void itc_fio() {
    cout << "Khristunova Igorevna" << endl;
}

int itc_abs(int num) {
    if (num < 0)
        return (num * (-1));
    return (num);
}

double itc_fabs(double num) {
    if (num < 0)
        return (num * (-1));
    return (num);
}

int itc_revnbr(int num) {
    return num % 10 * 100 + num / 10 % 10 * 10 + num / 100;
}