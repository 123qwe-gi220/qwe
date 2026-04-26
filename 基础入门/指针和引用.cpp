#include <iostream>
using namespace std;

void increment(int& value) {
    value++;
}

void doublevalue(int* ptr) {
    if (ptr != nullptr) {
        *ptr *= 2;
    }
}

int main() {
    int x =42;
    int* ptr = &x;
    cout <<"x的值：" << x <<endl;
    cout << "x的地址："<< &x << endl;
    cout << "ptr的值（地址）：" << ptr <<endl;
    cout << "ptr指向的值："<< *ptr <<endl;
    *ptr = 100;
    cout <<"修改后x的值：" << x << endl;
    int& ref =x;
    ref = 200;
    cout << "\n通过引用修改后x的值：" << x << endl;
    int num =10;
    cout << "\n函数调用语：" << num <<endl;
    increment(num);
    cout << "increment后：" << num <<endl;
    doublevalue(&num);
    cout << "doublement后： " << num << endl;
    int arr[] = {10,20,30,40,50};
    int* arrPtr = arr;
    cout << "\n指针遍历数组：";
    for (int i = 0; i < 5; i++) {
        cout << *(arrPtr + i) << " ";
    }
    cout << endl;
    int* dynArr = new int[3]{1,2,3};
    cout << "\n动态数组：" ;
    for (int i =0; i < 3; i++) {
        cout << dynArr[i] << " ";
    }
    cout << endl;
    delete[] dynArr;
    return 0;
}