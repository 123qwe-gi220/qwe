#include <iostream>
#include <string>
using namespace std;

string gradeLevel(int score) {
    if (score<0 || score > 100) return "无效分数";

    switch (score / 10) {
        case 10:
        case 9:
            return "优秀";
        case 8:
            return "良好";
        case 7:
            return "一般";
        case 6:
            return "及格";
        default:
            return "不及格完蛋了";
    }
}

int main() {
    int scores[] = {95,85,75,65,55,100};

    for (int score : scores) {
        cout << score << "分：" << gradeLevel(score) << endl;
    }

    cout << "\n--- 菜单示例 ---" << endl;
    char choice = 'F';
    switch (choice) {
        case 'A':
            cout <<"选了A" << endl;
            break;
        case 'B':
            cout <<"选了B" << endl;
            break;
        case 'C':
            cout <<"选了C" << endl;
            break;
        case 'D':
            cout <<"选了D" << endl;
            break;
        default:
            cout << "无效选项"<< endl;
    }

    return 0;
}