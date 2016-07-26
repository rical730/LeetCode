/*
 * Leetcode122. Best Time to Buy and Sell Stock II
 * Funtion: 假设有一个数组，它的第i个元素是一个给定的股票在第i天的价格。设计一个算法来找到最大的利润。你可以完成尽可能多的交易(多次买卖股票)。然而,你不能同时参与多个交易(你必须在再次购买前出售股票)。
 * Author: LKJ
 * Date:2016/7/21
 ＊ Hint：每一段单调递增区间的收益累加
*/
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int earning = 0;
        for(int i = 1; i < len; i++){
            if(prices[i] > prices[i-1]){
                earning += (prices[i] - prices[i-1]);
            }
        }
        return earning;
    }
};

int main(){
    int myarr[5] = {2,1,2,0,1};
    vector<int> myin(myarr,myarr+5);

    int myout;
    Solution SA;
    //cout << "Please Enter" << endl;
    //cin >> myin;
    myout = SA.maxProfit(myin);
    cout << myout << endl;

    //cout<<"VecOUT:"<<endl;
    //for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
    //    cout<<*it<<"     ";
   // }
   // cout<<endl;

    return 0;
}
