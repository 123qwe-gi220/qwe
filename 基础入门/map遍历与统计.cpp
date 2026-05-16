#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> scores = {
        {"语文", 88}, {"数学", 95},{"英语", 82}, {"物理", 90},{"化学", 86}
    };

    cout << "迭代器遍历：" <<endl;
    for (map<string, int>::iterator it = scores.begin(); it != scores.end();
++it) {
        cout << " " << it->first << ": " << it->second << "分" << endl;
    }

    cout << "\n范围for遍历：" << endl;
    for (const auto& pair : scores) {
        cout << " " << pair.first<< ": " << pair.second << "分" << endl;
    }

    cout << "\n结构化绑定遍历：" << endl;
    int total = 0;
    int maxScore = 0,minScore = 100;
    string maxSubject, minSubject;

    for (const auto& [subject, score] : scores) {
        cout << " " << subject << ": " <<score << "分" << endl;
        total += score;
        if (score > maxScore) { maxScore = score; maxSubject = subject; }
        if (score < minScore) { minScore = score; minSubject = subject; }
    }

    cout << "\n--- 统计结果 ---" << endl;
    cout << "科目数：" << scores.size() << endl;
    cout << "总分：" << total << endl;
    cout << "平均分：" << (double)total / scores.size() << endl;
    cout << "最高分：" << maxSubject << " " <<maxScore << "分" << endl;
    cout << "最低分：" << minSubject << " " <<minScore << "分" << endl;

    return 0;
}