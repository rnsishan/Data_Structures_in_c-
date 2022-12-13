/* create a separate file TreeNode.h and add this
#include<vector>
using namespace std;
template <typename T>

class TreeNode{
public:
    
    T data;
    vector<TreeNode<T>*> children;
    
    TreeNode(T data){
        this->data=data;
    }
    
    
};
//parent agar T type ka hai toh children bhi T type ke honge.
*/

/*
Tree Node class and print
every parent has address of its child Node
Root is head
every node will have a vector
vector of tree node pointers
*/

#include <bits/stdc++.h>
#include"TreeNode.h"

using namespace std;

TreeNode<int>* takeInput(){
    int rootData;
    cout<<"enter data"<<endl;
    cin>> rootData;
    TreeNode<int>* root= new TreeNode<int>(rootData);
    
    int n;
    cout<< "enter the num of children of "<< rootData<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}


void printTree(TreeNode<int>* root){
    
    if(root==NULL){
        return;
    }
    
    cout<< root->data << ":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
    
}


int main()
{
   /* TreeNode<int>* root= new TreeNode<int>(1);
    TreeNode<int>* node1= new TreeNode<int>(2);
    TreeNode<int>* node2= new TreeNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    printTree(root); */
    
    TreeNode<int>* root= takeInput();
    printTree(root);
    
    return 0;
}

/*
enter data
1
enter the num of children of 1
3
enter data
2
enter the num of children of 2
2
enter data
5
enter the num of children of 5
0
enter data
6
enter the num of children of 6
0
enter data
3
enter the num of children of 3
1
enter data
7
enter the num of children of 7
0
enter data
4
enter the num of children of 4
1
enter data
8
enter the num of children of 8
0
1:2,3,4,
2:5,6,
5:
6:
3:7,
7:
4:8,
8:

*/
