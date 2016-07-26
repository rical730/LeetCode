/*
 * Leetcode169. Majority Element
 * Funtion: Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
 * Example:
 * Author: LKJ
 * Date:2016/7/22
 * Hint：求主元素，在数组中出现超过n/2次,，，，中位数一定是主元素
*/
#include <iostream>
//#include <string>
#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len = nums.size();
        int x = nums[len/2];
        int cnt = 0;
        for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
            if(*it == x){
                cnt++;
            }
        }
        if(cnt >= (len/2)){
            return x;
        }else{
            return 0;
        }
    }
};

int main(){
    int myarr[5] = {1,1,1,5,6};
    vector<int> myin(myarr,myarr+5);

    int myout;
    Solution SA;
    //cout << "Please Enter" << endl;
    //cin >> myin;
    myout = SA.majorityElement(myin);
    cout << myout << endl;

    //cout<<"VecOUT:"<<endl;
    //for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
   //     cout<<*it<<"     ";
    //}
    //cout<<endl;

    return 0;
}
