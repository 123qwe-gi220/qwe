#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(int value) {
    cout << "整数：" << value << endl;
}

void print(double value) {
    cout << "浮点数：" << value << endl;
}

void print(const string& value) {
    cout << "字符串："<< value << endl;
}

void print(const vector<int>& vec) {
    cout << "向前：[";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i < vec.size() -1) cout << ",";
    }
    cout << "]" << endl;
}

int calculate(int a, int b) {
    cout << "请用两参数版本：";
    return a+b;
}

int calculate(int a, int b,int c) {
    cout << "请用三参数版本：";
    return a+b+c ;
}

int main() {
    print(42);
    print(3.14);
    print(string("Hello,c++"));
    print(vector<int>{1,2,3,4,5});

    cout << "\n" << calculate(3,5) << endl;
    cout << calculate(1,2,3) << endl;

    return 0;
}