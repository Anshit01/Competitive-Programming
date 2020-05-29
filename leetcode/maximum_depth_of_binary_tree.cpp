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
    int maxDepth(TreeNode* root) {
        ans = 0;
        if(root == NULL){
            return 0;
        }
        traverse(root, 1);
        return ans;
    }

private:
    int ans = 0;
    
    void traverse(TreeNode* node, int depth){
        if(node->left == NULL && node->right == NULL){
            if(ans < depth) ans = depth;
        }else{
            if(node->left){
                traverse(node->left, depth+1);
            }
            if(node->right){
                traverse(node->right, depth+1);
            }
        }
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}