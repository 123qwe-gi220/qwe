#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    set<int> s1 = {3,1,4,1,5,9,2,6};
    cout << "集合1 (自动去重排序) :";
    for (int n : s1) cout << n << " ";
    cout << endl;

    s1.insert(7);
    s1.erase(4);
    cout << "添加7删除4后：";
    for (int n : s1) cout << n << " ";
    cout << endl;

    cout << "查找5：" << (s1.count(5) ? "存在" : "不存在") << endl;
    cout << "查找4：" << (s1.count(4) ? "存在" : "不存在") << endl;

    set<int> setA = {1,2,3,4,5};
    set<int> setB = {4,5,6,7,8};

    vector<int> result;

    set_union(setA.begin(),setA.end(),setB.begin(),setB.end(),
              back_inserter(result));
    cout << "\n并集：";
    for (int n : result) cout << n << " ";
    cout << endl;

    result.clear();
    set_intersection(setA.begin(), setA.end(),setB.begin(),setB.end(),
                   back_inserter(result));
    cout << "交集：";
    for (int n : result) cout << n << " ";
    cout << endl;

    result.clear();
    set_difference(setA.begin(),setA.end(), setB.begin(),setB.end(),
                   back_inserter(result));
    cout << "差集（A-B）：";
    for (int n : result) cout << n<< " ";
    cout << endl;

    vector<int> nums = {1,2,2,3,4,4,5};
    set<int> uniqueSet(nums.begin(), nums.end());
    cout << "\n原vector:";
    for (int n : nums) cout << n << " ";
    cout <<"\n去重后：";
    for (int n : uniqueSet) cout << n << " ";
    cout << endl;

    return 0;
}