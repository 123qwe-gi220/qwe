#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<int> numbers = {3,1,4,1,5,9,2,6,5,3};

    cout << "原始函数：";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    vector<int> sorted_asc = numbers;
    sort(sorted_asc.begin(), sorted_asc.end());
    cout << "升序排序：";
    for (int n : sorted_asc) cout << n <<" ";
    cout << endl;

    vector<int> sorted_desc = numbers;
    sort(sorted_desc.begin(),sorted_desc.end(),greater<int>());
    cout << "降序排序：";
    for (int n : sorted_desc) cout << n << " ";
    cout << endl;

    vector<int> reversed = numbers;
    reverse(reversed.begin(),reversed.end());
    cout <<"反转后：";
    for (int n : reversed) cout << n << " ";
    cout << endl;

    vector<int> unique_vec = numbers;
    sort(unique_vec.begin(), unique_vec.end());
    unique_vec.erase(unique(unique_vec.begin(), unique_vec.end()),
unique_vec.end());
    cout << "去重后：";
    for (int n : unique_vec ) cout << n << " ";
    cout << endl;

    cout << "\n最大值：" << *max_element(numbers.begin(),numbers.end()) << endl;
    cout << "最小值：" << *min_element(numbers.begin(),numbers.end()) << endl;
    cout << "累加和：" << accumulate(numbers.begin(), numbers.end(),0) << endl;
    cout << "元素5出现次数：" << count(numbers.begin(),numbers.end(),5) << endl;

    return 0;

}