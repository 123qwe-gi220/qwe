#include <iostream>
using namespace std;

int main() {
    int count = 1;
    cout << "计数器：" <<endl;
    while (count <=5) {
        cout <<" 计数："<< count <<endl;
        count++;
    }

    int total =0,num =1;
    while (num <=10) {
        total += num;
        num++;
    }
    cout <<"1-10的和:" << total <<endl;

    int answer =7;
    int guesses[] = {3,5,8,7};
    int index = 0;
    int guess;

    cout <<"\n--- 猜数字游戏 ---" <<endl;
    do {
        guess = guesses[index++];
        cout << "猜测：" << guess;
        if (guess < answer) {
            cout << "-> 小了" << endl;
        }else if (guess > answer) {
            cout <<" -> 大了" << endl;
        }else {
            cout << "-> good,you are right." << endl;
        }
    } while (guess != answer);
    cout <<"总共猜了"<<index<< "次" << endl;

    return 0;

}