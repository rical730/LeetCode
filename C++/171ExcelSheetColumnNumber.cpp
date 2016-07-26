/*
 * Leetcode171. Excel Sheet Column Number
 * Funtion: Given a column title as appear in an Excel sheet, return its corresponding column number.
 * Example:     A -> 1
                B -> 2
                C -> 3
                ...
                Z -> 26
                AA -> 27
                AB -> 28
 * Author: LKJ
 * Date:2016/7/26
 * Hint: Related to168. Excel Sheet Column Title
*/
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int titleToNumber(string s) {
        int len = s.size();
        int num = 0;
        for(int i = 0; i < len; i++){
            num *= 26;
            num += s[i] - 'A' + 1;
        }
        return num;
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
    myout = SA.titleToNumber(myin);
    cout << myout << endl;

    //cout<<"VecOUT:"<<endl;
    //for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
    //    cout<<*it<<"     ";
    //}
    //cout<<endl;

    return 0;
}
