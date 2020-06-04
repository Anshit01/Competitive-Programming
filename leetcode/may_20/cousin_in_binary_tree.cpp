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

class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        auto ansx = searchTree(root, x);
        auto ansy = searchTree(root, y);
        if(ansx.first == ansy.first && ansx.second != ansy.second){
            return true;
        }
        return false;
    }

    pair<int, TreeNode*> searchTree(TreeNode* root, int x){
        if(root->val == x){
            return {0, NULL};
        }
        auto node = root;
        int depth = 0;
        while(true){
            if(node->left != NULL){
                if(node->left->val == x){
                    return {depth+1, node};
                }
            }
            if(node->right != NULL){
                if(node->right->val == x){
                    return {depth+1, node};
                }
            }
            if(node->val > x){
                node = node->left;
            }else{
                node = node->right;
            }
            depth++;
        }
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}