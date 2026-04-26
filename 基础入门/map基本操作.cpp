#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string,int > scores;
    scores["张三"] = 85;
    scores["李四"] = 92;
    scores["王五"] = 78;
    scores.insert(make_pair("赵六",90));

    cout << "张三的成绩：" << scores["张三"] << endl;

    scores["孙七"]=88;
    cout << "添加后，共有" << scores.size() << " 个学生" << endl;

    scores["王五"] =85;
    cout << "王五修改后的成绩：" << scores["王五"] << endl;

    string target = "李四";
    auto it = scores.find(target);
    if (it != scores.end()) {
        cout << target << "找到，成绩：" << it->second << endl;
    }else {
        cout << target << " 未找到" << endl;
    }

    scores.erase("赵六");
    cout << "删除赵六，共有" << scores.size() << " 个学生" << endl;

    cout << "\n所有学生成绩：" << endl;
    for (const auto& [name, score] : scores) {
        cout << " " << name <<": " << score << "分" << endl;
    }
    return 0;

}