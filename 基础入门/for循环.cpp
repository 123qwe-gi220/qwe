#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> fruits = {"苹果","香蕉","橙子"};
    cout <<"水果列表： " << endl;
    for (const auto& fruit : fruits) {
        cout <<" -"<< fruit <<endl;
    }

    int sum = 0;
    for (int i=1; i <=100; i++) {
        sum += 1;
    }
    cout <<"\n1-100的和:" << sum <<endl;

    string text ="C++";
    cout <<"\n字符串'" << text << "'的字符:";
    for (char c : text) {
        cout << c << " ";
    }
    cout << endl;

    cout << "\n跳过3，在7处停止：";
    for (int i = 1; i <= 10; i++) {
        if (i ==3) continue;
        if (i ==7) break;
        cout << i << "";
    }
    cout << endl;
    return 0;

}