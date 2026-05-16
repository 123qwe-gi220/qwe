#include <iostream>
#include <tuple>
#include <utility>
#include <vector>
#include <string>
using namespace std;
tuple<int, int, double> calculateStats(const vector<int>& data) {
    int minval = data[0], maxval = data[0];
    int sum = 0;
    for (int val : data) {
        if (val < minval) minval = val;
        if (val > maxval) maxval = val;
        sum += val;
    }
    return make_tuple(minval, maxval, (double)sum / data.size());
}
int main() {
    pair<string, int> student("张三", 20);
    cout << "pair - 姓名：" << student.first
         << ", 年龄：" << student.second << endl;

    auto point = make_pair(3.0,4.0);
    cout << "坐标：(" << point.first << ", " << point.second << ")" << endl;

    tuple<string, int, double> person("李四", 25, 1.78);
    cout << "\ntuple - 姓名：" << get<0>(person)
         << ", 年龄：" << get<1>(person)
         << ", 身高：" << get<2>(person) << endl;

    auto [name, age, height] = person;
    cout << "解包：" << name << ", " << age << ", " << height << endl;

    string n;
    int a;
    double h;
    tie(n,a,h) =person;
    cout << "tie绑定：" << n << ", " << a <<", " << h << endl;

    vector<int> data = {15,8,23,42,16};
    auto [minval, maxval, avg] = calculateStats(data);
    cout << "\n数据统计：" << endl;
    cout <<"最小值：" << minval << endl;
    cout << "最大值：" <<maxval<< endl;
    cout << "平均值：" << avg << endl;

    return 0;
}