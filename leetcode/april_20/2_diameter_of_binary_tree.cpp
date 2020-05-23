#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int dm = 0;
int depth(TreeNode* root){
    int ldepth, rdepth;
    if(root->left != NULL){
        ldepth = depth(root->left);
    }else{
        ldepth = 0;
    }
    if(root->right != NULL){
        rdepth = depth(root->right);
    }else{
        rdepth = 0;
    }
    int localdm = ldepth + rdepth;
    dm = max(dm, localdm);
    return max(ldepth, rdepth) + 1;
}

int diameterOfBinaryTree(TreeNode* root) {
    dm = 0;
    if(root == NULL){
        return 0;
    }
    depth(root);
    return dm;
}

int main(){
    TreeNode* n4 = new TreeNode(4);
    TreeNode* n5 = new TreeNode(5);
    TreeNode* n2 = new TreeNode(2, n4, n5);
    TreeNode* n3 = new TreeNode(3);
    TreeNode* root = new TreeNode(1, n2, n3);
    cout << diameterOfBinaryTree(root) << endl;
    cout << dm << endl;
}