/*
 * Leetcode94. Binary Tree Inorder Traversal
 * Funtion: Given a binary tree, return the inorder traversal of its nodes' values.
 * Author: LKJ
 * Date:2016/7/26
*/
#include <iostream>
#include <vector>

using namespace std;


struct TreeNode {
    int            val;
    TreeNode*    left;
    TreeNode*    right;
    TreeNode(int x): val(x), left(NULL),right(NULL) {}
};

void in_order(vector<int>& ino, TreeNode* root){
    if(root != NULL){
        in_order(ino,root->left);
        ino.push_back(root->val);
        in_order(ino,root->right);
    }
}

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ino;
        in_order(ino, root);
        return ino;
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
