#include <iostream>
using namespace std;
long long factorial(int n) {
    if (n <= 1) return 1;
    return n*factorial(n -1);
}

int fibonacci(int n) {
    if (n <=1) return n;
    return fibonacci(n -1) + fibonacci(n -2);
}

int sumArray(int arr[], int n) {
    if (n <= 0) return 0;
    return arr[n - 1] + sumArray(arr, n -1);
}

int main() {
    cout << "5的阶乘：" << factorial(5) << endl;
    cout << "10的阶乘：" << factorial(10) << endl;
    cout << "\n斐波那契数列前10项：";
    for (int i =0; i < 10; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    int arr[] = {1,2,3,4,5};
    cout << "\n数组[1,2,3,4,5]的和：" << sumArray(arr, 5) << endl;
    return 0;
}