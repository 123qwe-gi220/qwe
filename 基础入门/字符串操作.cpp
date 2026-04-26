#include <iostream>
# include <string>
# include <algorithm>
using namespace std;

int main() {
    string text = "Hello, C++ world";

    cout << "原字符串：" << text << endl;
    cout << "长度：" << text.length() << endl;

    cout << "子串[0,5):" << text.length() << endl;

    size_t pos = text.find("C++");
    cout << "\"C++\"的位置：" << pos << endl;

    string replaced = text;
    replaced.replace(pos, 3, "java");
    cout << "替换后：" << replaced << endl;

    string suffix = "你好：";
    cout << "拼接后： "<< text+suffix << endl;

    string upper = text;
    transform(upper.begin(),upper.end(),upper.begin(),::toupper);
    cout << "大写：" << upper << endl;

    string lower = text;
    transform(lower.begin(),lower.end(),lower.begin(),::tolower);
    cout << "小写：" << lower << endl;

    cout << "逐字符：";
    for (char c : text) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}