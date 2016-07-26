/*
 * Leetcode144. Binary Tree Preorder Traversal
 * Funtion: Given a binary tree, return the preorder traversal of its nodes' values.
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

void pre_order(vector<int>& pre, TreeNode* root){
    if(root != NULL){
        pre.push_back(root->val);
        pre_order(pre,root->left);
        pre_order(pre,root->right);
    }
}

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> pre;
        pre_order(pre, root);
        return pre;
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
