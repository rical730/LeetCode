/*
 * Leetcode283. Move Zeroes
 * Funtion: Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
 * example: given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
 * Author: LKJ
 * Date:2016/7/20
*/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        for (vector<int>::iterator it = nums.begin(); it != nums.end();){
            if(0 == *it){//删除元素，返回值指向已删除元素的下一个位置
                nums.erase(it);
                cnt++;//记录零的个数
            }else{//指向下一个位置
                it++;
            }
        }
        while(cnt--){
            nums.push_back(0);
        }
    }
};



int main(){
    int myarr[8] = {0, 0, 0, 0, 1, 0, 3, 12};
    vector<int> myin(myarr,myarr+8);

    Solution SA;
    //cout << "Please Enter" << endl;
    //cin >> myin;
    SA.moveZeroes(myin);
    //cout << myout << endl;

    cout<<"VecOUT:"<<endl;
    for(vector<int>::iterator it = myin.begin() ;it!=myin.end();it++){
        cout<<*it<<"     ";
    }
    cout<<endl;

    return 0;
}
