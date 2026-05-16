#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int main() {
    string text = "Hello";
    stack<char> charStack;

    for (char c : text) {
        charStack.push(c);
    }
    string reversed = "";
    while (!charStack.empty()) {
        reversed += charStack.top();
        charStack.pop();
    }
    cout << "原字符串：" << text << endl;
    cout << "反转后：" << reversed << endl;

    queue<string> line;
    line.push("张三");
    line.push("李四");
    line.push("王五");

    cout << "\n--- 排队模拟 ---" << endl;
    cout << "队伍中有" << line.size() << "人" << endl;
    while (!line.empty()) {
        cout << line.front() << " 办理完毕，离开" << endl;
        line.pop();
    }

    priority_queue<pair<int, string>> tasks;
    tasks.push({3, "普通任务"});
    tasks.push({5, "紧急任务"});
    tasks.push({1, "低优先级任务"});
    tasks.push({4, "重要任务"});

    cout << "\n--- 按优先级处理任务 ---" << endl;
    while (!tasks.empty()) {
        auto [priority, task] = tasks.top();
        cout <<"[优先级" << priority << "]" << task << endl;
        tasks.pop();
    }

    return 0;

}