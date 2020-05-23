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

TreeNode* sortedArrayToBST(vector<int>& nums) {
    int l = nums.size();
    if(l == 0) return NULL;
    int arr[l];
    for(int i = 0; i < l; i++){
        arr[i] = nums[i];
    }
    return arrayToBST(arr, 0, l);
}

TreeNode* arrayToBST(int *arr, int start, int end){
    if(end-start){
        int mid = (start+end)/2;
        TreeNode *head = new TreeNode(arr[mid]);
        head->left = arrayToBST(arr, start, mid);
        head->right = arrayToBST(arr, mid+1, end);
        return head;
    }
    return NULL;

}

int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}