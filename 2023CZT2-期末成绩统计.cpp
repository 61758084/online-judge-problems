#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    // 输入变量
    int id, chinese, math, english, science, social;
    
    // 读取输入
    cin >> id >> chinese >> math >> english >> science >> social;

    // 计算总成绩
    int totalScore = chinese + math + english + science + social;

    // 格式化学号为六位数
    stringstream ss;
    ss << setw(6) << setfill('0') << id;
    string formattedId = ss.str();

    // 输出结果
    cout << "code       score" << endl;
    cout << "----------------" << endl;
    cout << formattedId << "       " << totalScore << endl;

    return 0;
}
