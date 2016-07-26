/*
 * Leetcode357. Count Numbers with Unique Digits
 * Funtion: Given a non-negative integer n, count all numbers with unique digits, x, where 0 ≤ x < 10^n.
 * example: Given n = 2, return 91. (The answer should be the total numbers in the range of 0 ≤ x < 100, excluding [11,22,33,44,55,66,77,88,99])
 * Author: LKJ
 * Date: 2016/7/25
 * Hint: 本题目要求数出0-10^n之间有多少unique number，也就是有多少数字的每一位互不相同。用排列组合的思想解题
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int result = 1;
        if(n == 0){
            return 1;
        }else{
            int cheng = 1;
            for(int i = 1; i <= n; i++){
                if((i == 1)||(i == 2)){
                    cheng *= 9;
                }else{
                    cheng *= (11-i);
                }
                result += cheng;
            }
            return result;
        }
    }
};


int main(){
    //int myarr[2] = {0, 2};
    //vector<int> myin(myarr,myarr+2);
    int myin;
    int myout;
    Solution SA;
    cout << "Please Enter" << endl;
    cin >> myin;
    myout = SA.countNumbersWithUniqueDigits(myin);
    cout << myout << endl;

    //cout<<"VecOUT:"<<endl;
    //for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
    //    cout<<*it<<"     ";
    //}
    //cout<<endl;

    return 0;
}
