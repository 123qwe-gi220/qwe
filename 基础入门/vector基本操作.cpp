#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<string> fruits = {"苹果","香蕉","橙子"};

    cout << "初始化列表：" ;
    for (const auto& f : fruits) cout << f << " ";
    cout << endl;

    fruits.push_back("葡萄");
    cout << "添加后：" ;
    for (const auto& f : fruits) cout << f << " ";
    cout << endl;

    fruits.insert(fruits.begin() +1,"芒果");
    cout << "插入后：";
    for (const auto& f : fruits) cout << f << " ";
    cout << endl;

    fruits.erase(fruits.begin() +2);
    cout << "删除后：" ;
    for (const auto& f : fruits) cout << f << " ";
    cout << endl;

    fruits[0] = "西瓜";
    cout << "修改后：";
    for (const auto& f : fruits) cout << f << " ";
    cout << endl;

    auto it =find(fruits.begin(),fruits.end(),"橙子");
    if (it != fruits.end()) {
        cout << "\"橙子\"在索引：" << distance(fruits.begin(), it) << endl;
    }
    cout <<"元素个数：" << fruits.size()<< endl;
    return 0;
}