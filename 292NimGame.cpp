/*
 * Leetcode292. Nim Game
 * Funtion: You are playing the following Nim Game with your friend: There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner.
 * Author: LKJ
 * Date:2016/7/18
*/
#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
        if( (n % 4) == 0 ){
            return false;
        }else{
            return true;
        }
    }
};



int main(){
    int myin;
    bool myout;
    Solution SA;
    cout << "Please Enter:" << endl;
    cin >> myin;
    myout = SA.canWinNim(myin);
    cout << myout << endl;

    return 0;
}
