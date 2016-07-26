/*
 * Leetcode100. Same Tree
 * Funtion: Given two binary trees, write a function to check if they are equal or not.

 * Author: LKJ
 * Date:2016/7/21
*/
#include <iostream>
//#include <vector>

using namespace std;


struct TreeNode {
    int            val;
    TreeNode*    left;
    TreeNode*    right;
    TreeNode(int x): val(x), left(NULL),right(NULL) {}
};


class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if( (p == NULL)&&(q == NULL) ){
            return true;
        }else if( (p != NULL)&&(q == NULL) ){
            return false;
        }else if( (p == NULL)&&(q != NULL) ){
            return false;
        }else{
            if(p->val != q->val){
                return false;
            }else{
                return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
            }
        }
    }
};


int main(){
    //int myin;
    //int myout;
    //Solution SA;
    //cout << "Please Enter" << endl;
    //cin >> myin;
    //myout = SA.singleNumber(myin);
    //cout << myout << endl;
    //cout << getFristBit(1) << endl;
    return 0;
}
