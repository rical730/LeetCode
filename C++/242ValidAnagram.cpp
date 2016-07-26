/*
 * Leetcode242. Valid Anagram
 * Funtion: Given two strings s and t, write a function to determine if t is an anagram of s.
 * Example: s = "anagram", t = "nagaram", return true.              s = "rat", t = "car", return false.
 * Author: LKJ
 * Date:2016/7/22
 * Hint：判断两个字符串是否回文构词,相同字母异序词,排序后判断是否相等
*/
#include <iostream>
#include <string>
//#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

int main(){
    string myin1 = "anagram";
    string myin2 = "nagaram";

    bool myout;
    Solution SA;
    //cout << "Please Enter" << endl;
    //cin >> myin;
    myout = SA.isAnagram(myin1,myin2);
    cout << myout << endl;

    //cout<<"VecOUT:"<<endl;
    //for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
   //     cout<<*it<<"     ";
    //}
    //cout<<endl;

    return 0;
}
