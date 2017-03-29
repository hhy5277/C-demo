#include <iostream>

using std::cout; using std::cin;using std::string;
using std::endl;

int main() {
    string s("Hello World!!!");
    // 统计 s 中标点符号的数量
    int punct_cnt = 0;
    for (auto c :s) {
        if (ispunct(c)) {
            punct_cnt++;
        }
    }
    cout << s << " 中的标点符号数量为 " << punct_cnt << endl;

    // 将s转换成大写形式
    string s2 = s;
    for (auto &c :s2) {
        c = toupper(c);
    }
    cout << "将 " << s << " 转换成大写形式，结果是： " << s2 << endl;
    return 0;
}