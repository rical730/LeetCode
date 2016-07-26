/*
 * Leetcode13. Roman to Integer
 * Funtion: Given a roman numeral, convert it to an integer.
 * Example:     I -> 1
                II -> 2
                III -> 3
                IV -> 4
                ...
                C -> 100
                M -> 1000
                MCM -> 1900
 * Author: LKJ
 * Date:2016/7/26
 * Hint: 计数规则：
    1. 若干相同数字连写表示的数是这些罗马数字的和，如 III=3；
    2. 小数字在大数字前面表示的数是用大数字减去小数字，如 IV＝4；
    3. 小数字在大数字后面表示的数是用大数字加上小数字，如 VI=6;
*/
#include <iostream>
#include <vector>
#include <map>

using namespace std;


class Solution {
public:
    int romanToInt(string s) {
            map<char,int> roman;
            roman.insert(pair<char,int> ('I',1));
            roman.insert(pair<char,int> ('V',5));
            roman.insert(pair<char,int> ('X',10));
            roman.insert(pair<char,int> ('L',50));
            roman.insert(pair<char,int> ('C',100));
            roman.insert(pair<char,int> ('D',500));
            roman.insert(pair<char,int> ('M',1000));

            int len = s.size();
            int result = 0;
            for(int i = 0; i < len; i++){
                if(roman[s[i+1]] > roman[s[i]]){
                    result -= roman[s[i]];
                }else{
                    result += roman[s[i]];
                }
            }
            return result;
    }
};



int main(){
    //int myarr[2] = {0, 2};
    //vector<int> myin(myarr,myarr+2);
    string myin;
    int myout;
    Solution SA;
    cout << "Please Enter" << endl;
    cin >> myin;
    myout = SA.romanToInt(myin);
    cout << myout << endl;

    //cout<<"VecOUT:"<<endl;
    //for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
    //    cout<<*it<<"     ";
    //}
    //cout<<endl;

    return 0;
}
