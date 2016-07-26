/*
 * Leetcode334. reverseString
 * Funtion: Write a function that takes a string as input and returns the string reversed.
 * Author: LKJ
 * Date:2016/7/18
*/
#include <iostream>

using namespace std;

class Solution {
public:
    string reverseString(string s) {
        int len = s.length();
        string o;
        for(int i = len-1; i >= 0; i--){
        	o += s[i];/*字符串拼接*/
		}
		return o;
    }
};



int main(){
    string strin,strout;
    Solution reverResult;
    cout << "Please Enter a string:" << endl;
    cin >>strin;
    strout = reverResult.reverseString(strin);
    cout << strout;
    return 0;
}
