#include <iostream>
using namespace std;
int main() {
    int a=17;
    int b=5;
    cout<<"a="<<a<<",b="<<b<<endl;
    cout<<"和："<<a+b<<endl;
    cout<<"差："<<a-b<<endl;
    cout<<"积："<<a*b<<endl;
    cout<<"整数商："<<17/5<<endl;
    cout<<"浮点商："<<(double)17/5<<endl;
    cout<<"余数："<<17%5<<endl;

    int x=10;
    int y=++x;
    int w=x++;
    cout<<"前缀："<<y<<endl;
    cout<<"后最："<<w<<endl;
    cout<<"x现在最新值："<<x<<endl;

    return 0;

}