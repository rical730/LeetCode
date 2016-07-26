/*
 * Leetcode319. Bulb Switcher
 * Funtion: There are n bulbs that are initially off. You first turn on all the bulbs. Then, you turn off every second bulb. On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on). For the ith round, you toggle every i bulb. For the nth round, you only toggle the last bulb. Find how many bulbs are on after n rounds.
 * example: Given n = 3.

 * At first, the three bulbs are [off, off, off].
 * After first round, the three bulbs are [on, on, on].
 * After second round, the three bulbs are [on, off, on].
 * After third round, the three bulbs are [on, off, off].

 * So you should return 1, because there is only one bulb is on.

 * Author: LKJ
 * Date:2016/7/25
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};


int toggle(int num){
    if(num == 0) return 1;
    else return 0;
}

int main(){
    //int myarr[2] = {0, 2};
    //vector<int> myin(myarr,myarr+2);
    int myin;
    int myout;
    Solution SA;


    //测试代码
    cout <<"Please Enter:";
    while(cin >> myin){
        vector<int> myout1(myin);
        int len = myout1.size();
        for(int i = 0; i < len; i++){
            cout<<i<<':'<<'\t';
            int j = 1;
            for(vector<int>::iterator it = myout1.begin() ;it!=myout1.end();it++){
                if(i == 0){
                    *it = toggle(*it);
                }else{
                    if(j%(i+1) == 0){
                        *it = toggle(*it);
                    }
                }
                cout<<*it<<" ";
                j++;
            }
            cout<<endl;
        }

        // 找规律发现平方数为1，其他为零
        myout = SA.bulbSwitch(myin);
        cout << myout << endl;


        cout <<endl<< "Please Enter:";
    }



    //cout<<"VecOUT:"<<endl;
    //for(vector<int>::iterator it = myout.begin() ;it!=myout.end();it++){
    //    cout<<*it<<"     ";
    //}
    //cout<<endl;

    return 0;
}
