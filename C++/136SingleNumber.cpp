/*
 * Leetcode136. Single Number
 * Funtion: Given an array of integers, every element appears twice except for one. Find that single one.
 * Author: LKJ
 * Date:2016/7/19
*/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int length = nums.size();
        int result = 0 ;
        for (int i=0; i<length; i++)
        {
            result ^= nums[i];
        }
        return result;
    }
};



int main(){
    int myarr[5] = {1,1,3,3,4};
    vector<int> myin(myarr,myarr+5);
    int myout;
    Solution SA;
    //cout << "Please Enter" << endl;
    //cin >> myin;
    myout = SA.singleNumber(myin);
    cout << myout << endl;

    return 0;
}
