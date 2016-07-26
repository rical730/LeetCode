/*
 * Leetcode104. Maximum Depth of Binary Tree
 * Funtion: Given a binary tree, find its maximum depth.

 * Author: LKJ
 * Date:2016/7/19
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
    int maxDepth(TreeNode* root) {//采用DFS的思想
        if (NULL == root)
           return 0;
        int leftdepth  = maxDepth(root->left);
        int rightdepth = maxDepth(root->right);

        return leftdepth > rightdepth ? leftdepth + 1 : rightdepth + 1;
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
