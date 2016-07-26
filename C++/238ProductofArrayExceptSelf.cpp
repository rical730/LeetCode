/*
 * Leetcode238. Product of Array Except Self
 * Funtion: Given an array of n integers where n > 1, nums, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].
 * example: For example, given [1,2,3,4], return [24,12,8,6].
 * Author: LKJ
 * Date:2016/7/21
 * hint:
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        int* left = new int[len]();
        int* right = new int[len]();
        vector<int> pro;
        int pronum;

        left[0] = nums[0];
        for(int i = 1; i < len; i++){
            left[i] = left[i-1] * nums[i];
        }

        right[len-1] = nums[len-1];
        for(int i = len-2; i >= 0; i--){
            right[i] = right[i+1] * nums[i];
        }

        for(int i = 0; i < len; i++){
            if(i == 0){
                pronum = right[1];
            }else if(i == (len - 1)){
                pronum = left[len-2];
            }else{
                pronum = left[i-1] *right[i+1];
            }
            pro.push_back(pronum);
        }
        return pro;
    }
};


int main(){
    int myarr[8] = {1, 2, 2, 3, 1, 1, 1, 1};
    vector<int> myin(myarr,myarr+8);

    vector<int> myout;
    Solution SA;
    //cout << "Please Enter" << endl;
    //cin >> myin;
    myout = SA.productExceptSelf(myin);
    //cout << myout << endl;

    cout<<"VecOUT:"<<endl;
    for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
        cout<<*it<<"     ";
    }
    cout<<endl;

    return 0;
}
