/*
 * Leetcode347. Top K Frequent Elements
 * Funtion: Given a non-empty array of integers, return the k most frequent elements.
 * Example: Given [1,1,1,2,2,3] and k = 2, return [1,2].
 * Author: LKJ
 * Date:2016/7/21
 * Hint：每一段单调递增区间的收益累加
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int> > hasharr;
        vector<pair<int,int> >::iterator it;
        //升序排序
        sort(nums.begin(),nums.end());

        //计算每个数出现的次数，记录进二元组中，相当于哈希数组
        for(int i = 0; i < nums.size(); ++i){
            int count=1;
            while(i+1<nums.size() && nums[i+1]==nums[i]){
                ++count;
                ++i;
            }
            hasharr.push_back(pair<int,int>(count,nums[i]));
        }

        //对记录了数字以及对应出现次数的二元组进行排序
        sort(hasharr.begin(),hasharr.end());

        //将出现次数最高的前个数顺序放入新数组中
        vector<int> result;
        int i=hasharr.size()-1,j=0;
        while(j<k&&i>=0){
            result.push_back(hasharr[i].second);
            ++j;
            --i;
        }
        return result;
    }
};

int main(){
    int myarr[6] = {1,1,1,2,2,3};
    vector<int> myin(myarr,myarr+6);

    vector<int> myout;
    Solution SA;
    //cout << "Please Enter" << endl;
    //cin >> myin;
    myout = SA.topKFrequent(myin,2);
    //cout << myout << endl;

    cout<<"VecOUT:"<<endl;
    for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
        cout<<*it<<"     ";
    }
    cout<<endl;

    return 0;
}
