#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void greet() {
    cout << "Hello,World" << endl;
}

void greetPerson(const string& name) {
    cout << "Hello," << name << "!" << endl;
}

int add(int a, int b) {
    return a+b;
}

double power(double base, int exponent = 2) {
    return pow(base,exponent);
}

void swapvalues(int& a, int& b) {
    int temp = a;
    a =b;
    b=temp;
}

int main() {
    greet();
    greetPerson("Alice");
    cout << "5 + 3 =" << add(5,3) << endl;
    cout << "2到4次方："<< power(2,4) << endl;
    cout << "3的平方：" << power(3) << endl;

    int x = 10,y = 20;
    cout << "\n交换前：x=" << x << ", y=" << y <<endl;
    swapvalues(x,y);
    cout << "交换后：x=" << x << ",y=" << y << endl;

    return 0;
}