#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(const string& name, int age) : name(name), age(age) {
        cout << "创建对象：" << name << endl;
    }

    ~Person() {
        cout << "销毁对象：" << name << endl;
    }

    string introduce() const {
        return "我叫" + name + ", 今年" + to_string(age) +"岁";
    }

    void celebrateBirthday() {
        age++;
        cout << "生日快乐！" << name << "现在" << age << "岁了" << endl;
    }

    string getName() const {return name;}
    int getAge() const {return age;}
};

int main() {
    Person p1("张三", 25);
    Person p2("李四" ,30);

    cout << "\n" << p1.introduce() << endl;
    cout << p2.introduce() << endl;

    cout << endl;
    p1.celebrateBirthday();
    cout << p1.introduce() << endl;

    cout << endl;
    return 0;
}