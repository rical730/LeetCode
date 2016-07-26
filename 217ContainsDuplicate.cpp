/*
 * Leetcode217. Contains Duplicate
 * Funtion: Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
 * Example:
 * Author: LKJ
 * Date:2016/7/22
 * Hint：查数组里有没有重复的数字
*/
#include <iostream>
//#include <string>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() == 1){
            return false;
        }
        sort(nums.begin(),nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};

int main(){
    int myarr[1] = {0};
    vector<int> myin(myarr,myarr+1);

    bool myout;
    Solution SA;
    //cout << "Please Enter" << endl;
    //cin >> myin;
    myout = SA.containsDuplicate(myin);
    cout << myout << endl;

    //cout<<"VecOUT:"<<endl;
    //for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
   //     cout<<*it<<"     ";
    //}
    //cout<<endl;

    return 0;
}
