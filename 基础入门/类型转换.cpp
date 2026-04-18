#include <iostream>
#include <string>
using namespace std;

int main() {
    int intval=43;
    double doubleval=intval;
    cout << "隐式转换：int " << intval <<" -> double " << doubleval <<endl;

    double pi = 3.14159;
    int truncated = static_cast<int>(pi);
    int cstyle = (int)pi;
    cout <<"static_cast:" << pi <<"->" << truncated << endl;
    cout <<"c风格转换："<< pi <<"->" << cstyle <<endl;

    char ch = 'A';
    int ascii = static_cast<int>(ch);
    cout <<"\n字符" <<ch <<"的ASCII码："<< ascii << endl;

    string strNum = "123";
    int intNum = stoi(strNum);
    double dblNum = stod("3.14");
    string backTostr = to_string(intNum);

    cout <<"\n字符串\"123\"转整数："<< intNum <<endl;
    cout <<"字符串\"3.14\"转浮点数："<<dblNum <<endl;
    cout << "整数转字符串：\"" <<backTostr << "\"" << endl;
    cout << "平方：" <<intNum * intNum << endl;

    return 0;

}