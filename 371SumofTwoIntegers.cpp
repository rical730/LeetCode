/*
 * Leetcode371. Sum of Two Integers
 * Funtion: Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.
 * Author: LKJ
 * Date:2016/7/18
 * 思路：对位操作的考察：
 * 步骤一、A^B，能够得到没有进位的加法
 * 步骤二、A&B，能够得到相加之后，能够进位的位置的信息。向左移动一位，就是两个二进制数相加之后的进位信息。所以，(A&B)<<1就是两个二进制数相加得到的“进位结果”。
 * 步骤三、将前两步的结果相加。相加的过程就是步骤一和步骤二，直到不再产生进位为止。
*/
#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        while (b){
            int x = a ^ b, y = (a & b) << 1;
            a = x; b = y;
        }
        return a;
    }
};


int main(){
    int myin1,myin2;
    int myout;
    Solution SA;
    cout << "Please Enter 2 intergers:" << endl;
    cin >> myin1>>myin2;
    myout = SA.getSum(myin1,myin2);
    cout << myout << endl;

    return 0;
}
