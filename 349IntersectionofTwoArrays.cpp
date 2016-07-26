/*
 * Leetcode349. Intersection of Two Arrays
 * Funtion: Given two arrays, write a function to compute their intersection.
 * example: Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].
 * Author: LKJ
 * Date:2016/7/20
*/

#include <iostream>
#include <vector>

using namespace std;

bool diff(vector<int>& nums3, int n){
    for(int i = 0; i != nums3.size(); i++){
        if(n == nums3[i]){
            return false;
        }
    }
    return true;
}


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> inter;
        for(vector<int>::iterator it1 = nums1.begin(); it1 != nums1.end(); it1++){
            for(vector<int>::iterator it2 = nums2.begin(); it2 != nums2.end(); it2++){
                if((*it1 == *it2) && diff(inter,*it2)){
                    inter.push_back(*it2);
                }
            }
        }
        return inter;
    }
};



int main(){
    int myarr1[8] = {0, 2, 2, 3, 3, 0, 5, 12};
    vector<int> myin1(myarr1,myarr1+8);
    int myarr2[8] = {1, 3, 3, 5, 0, 6, 3, 12};
    vector<int> myin2(myarr2,myarr2+8);

    vector<int> myout;
    Solution SA;
    //cout << "Please Enter" << endl;
    //cin >> myin;
    myout = SA.intersection(myin1,myin2);
    //cout << myout << endl;

    cout<<"VecOUT:"<<endl;
    for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
        cout<<*it<<"     ";
    }
    cout<<endl;

    return 0;
}
