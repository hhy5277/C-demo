/**
 * 输入一组分数，如： 23 34 54 51 87 34 98 70 60 ,以换行符 \n 作为结束
 * 分别统计：0~30分，31~60分，61~90分，91~100分各有几人
 */
#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main() {

    vector<unsigned> scores(4, 0);
    unsigned grade;
    while (cin >> grade) {
        if (grade > 0 && grade <= 30) {
            scores[0]++;
        } else if(grade >30 && grade <= 60) {
            scores[1]++;
        } else if(grade >60 && grade <=90) {
            scores[2]++;
        } else {
            scores[3]++;
        }
    }

    cout << "0~30分的人有 " << scores[0] << " 个；";
    cout << "31~60分的人有 " << scores[1] << " 个；";
    cout << "61~90分的人有 " << scores[2] << " 个；";
    cout << "91~100分的人有 " << scores[3] << " 个。";

    return 0;
}