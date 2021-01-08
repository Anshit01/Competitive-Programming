class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    queue<int> q;
	    vector<bool> visited(V, false);
	    q.push(0);
	    visited[0] = true;
	    while(!q.empty()){
	        int v = q.front();
	        q.pop();
	        cout << v << ' ';
	        for(int a : adj[v]){
	            if(!visited[a]){
	                q.push(a);
	                visited[a] = true;
	            }
	        }
	    }
	}
};

