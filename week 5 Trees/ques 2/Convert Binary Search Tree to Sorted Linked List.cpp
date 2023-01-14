#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
  void inorder(TreeNode<int>* root, vector<int>&temp)
  {
      if(root == NULL)
      {
          return;
      }
      inorder(root->left,temp);
      temp.push_back(root->data);
      inorder(root->right,temp);
  }

TreeNode<int>* flatten(TreeNode<int>* root)
{
    // Write your code here
  
    if(root == NULL)
    {
        return NULL;
    }
    vector<int>temp;
    inorder(root,temp);
    int n = temp.size();
    TreeNode<int>*head = new TreeNode<int>(temp[0]);
    TreeNode<int>*curr = head;
    for(int i=1;i<n;i++)
    {
        TreeNode<int>*t = new TreeNode<int>(temp[i]);
        curr->left = NULL;
        curr->right = t;
        curr = t;
    }
    curr->left = NULL;
    curr->right = NULL;
    return head;
}
