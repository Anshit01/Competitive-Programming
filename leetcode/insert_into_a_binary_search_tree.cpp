/* *>>>>>Anshit_Bhardwaj<<<<<* */
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

TreeNode* insertIntoBST(TreeNode* root, int val) {
    auto newNode = new TreeNode(val);
    if(root == NULL){
        root = newNode;
        return root;
    }
    auto node = root;
    while(true){
        if(val < node->val){
            if(node->left == NULL){
                node->left = newNode;
                return root;
            }else{
                node = node->left;
            }
        }else{
            if(node->right == NULL){
                node->right = newNode;
                return root;
            }else{
                node = node->right;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}