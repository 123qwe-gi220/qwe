#include <iostream>
#include <string>
using namespace std;
int main() {
    int age=19;
    double h=1.71;
    char grade = 'A';
    bool alpha = true;
    string name = "李四";

    cout <<"年龄："<<age<<endl;
    cout <<"身高："<<h<<endl;
    cout <<"成绩："<<grade<<endl;
    cout <<"学生："<<boolalpha<<alpha<<endl;
    cout <<"姓名："<<name<<endl;

    cout <<"int: "<<sizeof(int)<<"字符"<<endl;
    cout <<"double: "<<sizeof(double)<<"字符"<<endl;
    cout<<"char: "<<sizeof(char)<<"字符"<<endl;
    cout <<"bool: "<<sizeof(bool)<<"字符"<<endl;
    cout <<"string: "<<sizeof(string)<<"字符"<<endl;

    auto x=42;
    auto y=1.75;
    auto z='A';
    auto m=true;
    auto n="张三";
    cout<<"x:"<<x<<",y:"<<y<<",z:"<<z<<",m:"<<m<<",n:"<<n;

    return 0;

}