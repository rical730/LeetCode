/*
 * Leetcode168. Excel Sheet Column Title
 * Funtion: Given a positive integer, return its corresponding column title as appear in an Excel sheet.
 * Example:     1 -> A
                2 -> B
                3 -> C
                ...
                26 -> Z
                27 -> AA
                28 -> AB
 * Author: LKJ
 * Date:2016/7/26
*/
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    string convertToTitle(int n) {
        string str;
        string tem;
        while(n){
                tem = 'A' + (n-1)%26;
                str = tem+str;

            n = (n-1)/26;
        }
        return str;
    }
};



int main(){
    //int myarr[2] = {0, 2};
    //vector<int> myin(myarr,myarr+2);
    int myin;
    string myout;
    Solution SA;
    cout << "Please Enter" << endl;
    cin >> myin;
    myout = SA.convertToTitle(myin);
    cout << myout << endl;

    //cout<<"VecOUT:"<<endl;
    //for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
    //    cout<<*it<<"     ";
    //}
    //cout<<endl;

    return 0;
}
