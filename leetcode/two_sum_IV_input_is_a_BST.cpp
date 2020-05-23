#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool searchBST(TreeNode* root, int target){
    while(root != NULL){
        if(root->val == target){
            return true;
        }
        if(root->val > target){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return false;
}


bool findTarget(TreeNode* root, int k) {
    return findSumRecursive(root, root, k);
}

bool findSumRecursive(TreeNode* root, TreeNode* node, int k){
    if(root == NULL){
        return false;
    }
    if(k-node->val != node->val and searchBST(root, k - node->val)){
        return true;
    }
    if(findSumRecursive(root, node->left, k)){
        return true;
    }
    else if(findSumRecursive(root, node->right, k)){
        return true;
    }
    return false;
}



int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}