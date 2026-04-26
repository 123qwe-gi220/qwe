#include <iostream>
#include <array>
using namespace std;

int main() {
    int numbers[] = {85,92,78,90,88};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "原生数组：";
    for (int i =0; i <size; i++) {
        cout <<numbers[i] << " ";
    }
    cout << endl;

    int maxval = numbers[0], minval = numbers[0];
    int sum = 0;
    for (int i =0; i < size ; i++) {
        if (numbers[i] > maxval) maxval = numbers[i];
        if (numbers[i] < minval) minval = numbers[i];
        sum += numbers[i];
    }
    cout << "最大值：" << maxval << endl;
    cout << "最小值：" << minval << endl;
    cout << "平均值：" << (double)sum / size << endl;

    array<int, 5> scores = {95,87,76,93,81};
    cout << "\nstd::array:";
    for (int s : scores) {
        cout << s << " ";
    }
    cout << endl;
    cout << "数组大小：" << scores.size() <<endl;
    cout << "第一个元素：" << scores.front() << endl;
    cout << "最后一个元素：" << scores.back() << endl;

    return 0;
}