/*
 * Leetcode338. Counting Bits
 * Funtion: Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array..
 * Author: LKJ
 * Date:2016/7/18
*/
#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> cb;
        cb.push_back(0);
        for(int i = 1; i <= num; i++){
            int nextcb = cb[i >> 1] + (i & 1);
            cb.push_back(nextcb);
        }
        return cb;
    }
};



int main(){
    int myin;
    vector<int> myout;
    Solution CB;
    cout << "Please Enter:" << endl;
    cin >> myin;
    myout = CB.countBits(myin);
    cout<<"VecCB:"<<endl;
    for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
        cout<<*it<<"     ";
    }
    cout<<endl;
    return 0;
}
