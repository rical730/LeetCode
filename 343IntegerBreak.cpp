/*
 * Leetcode343. Integer Break
 * Funtion: Given a positive integer n, break it into the sum of at least two positive integers and maximize the product of those integers. Return the maximum product you can get.
 * example: given n = 2, return 1 (2 = 1 + 1); given n = 10, return 36 (10 = 3 + 3 + 4).
 * Author: LKJ
 * Date: 2016/7/25
 * Hint: 方法一：动态规划
 * 方法二：数学解释：
 * 由均值不等式(n个数的算术平均数大于等于它们的几何平均数)：
 * 得：当把输入的n拆分成几个相等的数时它们的积最大。
 * 那么问题来了，拆分成几个呢？
 * 为了方便使用导数，我们先假设我们可以把n拆分成实数。那么设每一个数为x,则一共有n/x个数。
 * 设它们的积为f(x),则f(x)=x(n/x)，那么怎么求f(x)最大值呢？求导数！
 * f′(x)=(n/x2)  *  x(n/x)  * (1-lnx)
 * 当x=e时取极大值。
 * 而我们题目里规定x为整数，那么我们只需要取的x越靠近e越好。那么2<e<3，而且e=2.71828...，所以取3是最好的，如果取不到3就取2。
 * 幂运算复杂度为O(lgn)，所以这个算法复杂度为O(lgn)。
*/

#include <iostream>
//#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

//方法一：DP算法
/*
class Solution {
public:
    int integerBreak(int n) {
        int dp[n];
        dp[1] = 1;
        dp[2] = 1;
        for(int i = 3; i <= n; i++){
            dp[i] = -1;
            for(int j = 1; j < i; j++){
                dp[i] = max(j*dp[i-j],max(dp[i],j*(i-j)));
            }
        }
        return dp[n];
    }
};*/

//方法二：数学算法
class Solution {
public:
    int integerBreak(int n) {
        if(n == 1) return 1;
        if(n == 2) return 1;
        if(n == 3) return 2;

        int num = n/3;
        int result = 1;
        for(int i = 0; i < num; i++){
            result *= 3;
        }
        if((n%3)==1) return result/3*4;
        else if((n%3)==2) return result*2;
        else return result;
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
    myout = SA.integerBreak(myin);
    cout << myout << endl;

    //cout<<"VecOUT:"<<endl;
    //for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
    //    cout<<*it<<"     ";
    //}
    //cout<<endl;

    return 0;
}
