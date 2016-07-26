/*
 * Leetcode260. Single Number III
 * Funtion: Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.
 * Author: LKJ
 * Date:2016/7/19
 * reference：https://www.lijinma.com/blog/2014/05/29/amazing-xor/
*/
#include <iostream>
#include <vector>

using namespace std;


int getFristBit(int num){
    int OneBit = 1;
    while((num & 1) == 0){
        num = num >> 1;
        OneBit = OneBit << 1;
    }
    return OneBit;
}


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int length = nums.size();
        int aXORb = 0 ;
        int OneBit;
        int a = 0;
        int b = 0;
        vector<int> result;

        for (int i=0; i<length; i++)
        {
            aXORb ^= nums[i];
        }
        OneBit = getFristBit(aXORb);
        for(int i = 0; i < length; i++){
            if((nums[i] & OneBit) == 0){
                a ^= nums[i];
            }
        }
        b = aXORb ^ a;
        result.push_back(a);
        result.push_back(b);
        return result;
    }
};


int main(){
    int myarr[8] = {1,1,3,3,8,8,4,5};
    vector<int> myin(myarr,myarr+8);
    vector<int> myout;
    Solution SA;
    //cout << "Please Enter" << endl;
    //cin >> myin;
    myout = SA.singleNumber(myin);
    cout << myout[0] << myout[1] << endl;
    //cout << getFristBit(1) << endl;
    return 0;
}
