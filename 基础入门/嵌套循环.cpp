#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "九九乘法表" << endl;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1;j <= i; j++) {
            cout << j << "x" << i << "=" <<setw(2) << i*j << " ";
        }
        cout << endl;
    }
    cout << "\n三角形：" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout << "\n矩形元素：" << endl;
    for (int i =0; i <3; i++) {
        for (int j=0;j < 3;j++) {
              cout << matrix[i][j] << "\t";
        }
         cout << endl;
    }
   return 0;
}