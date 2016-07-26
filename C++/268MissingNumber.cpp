/*
 * Leetcode268. Missing Number
 * Funtion: Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
 * example: Given nums = [0, 1, 3] return 2.
 * Author: LKJ
 * Date:2016/7/25
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int missnum = 0;
        int len = nums.size();
        if(nums[0] == 1){
            missnum = 0;
        }else{
            for(int i = 1; i < len; i++){
                if(nums[i] != (nums[i-1]+1)){
                    missnum = nums[i]-1;
                    break;
                }
            }
            if(missnum == 0){
                missnum = nums[len-1]+1;
            }
        }
        return missnum;
    }
};



int main(){
    int myarr[2] = {0, 2};
    vector<int> myin(myarr,myarr+2);

    int myout;
    Solution SA;
    //cout << "Please Enter" << endl;
    //cin >> myin;
    myout = SA.missingNumber(myin);
    cout << myout << endl;

    //cout<<"VecOUT:"<<endl;
    //for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
    //    cout<<*it<<"     ";
    //}
    //cout<<endl;

    return 0;
}
