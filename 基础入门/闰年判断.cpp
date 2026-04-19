#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year %4==0 && year%100!=0) || (year %400 ==0);
}

int main() {
    int years[] ={2000,2004,2100,2400,2023};

    for (int year :years) {
        cout << year <<"年是"
             << (isLeapYear(year) ? "闰年":"平年") << endl;
    }
    return 0;
}