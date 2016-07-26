/*
 * Leetcode226. Invert Binary Tree
 * Funtion: Invert a binary tree.
 * Author: LKJ
 * Date:2016/7/20
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
    TreeNode* invertTree(TreeNode* root) {
        if (NULL == root)
           return 0;

        invertTree(root->left);
        invertTree(root->right);

        TreeNode* temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;

        return root;
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
