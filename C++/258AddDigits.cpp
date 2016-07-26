/*
 * Leetcode258. Add Digits
 * Funtion: Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
 * Author: LKJ
 * Date:2016/7/19
 * 思路：通过输入距离来发现规律
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
    1 2 3 4 5 6 7 8 9 1  2  3  4  5  6  7  8  9  1  2  3  4  5  6  7  8
*/
#include <iostream>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        return 1 + (num-1)%9;
    }
};



int main(){
    int myin;
    int myout;
    Solution SA;
    cout << "Please Enter" << endl;
    cin >> myin;
    myout = SA.addDigits(myin);
    cout << myout << endl;

    return 0;
}
