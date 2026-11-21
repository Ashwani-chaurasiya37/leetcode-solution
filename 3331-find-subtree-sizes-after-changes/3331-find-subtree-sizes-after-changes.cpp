// Approch
// step-1 Find the New Parent Using DFS(backtracking).
// step-2 Build the Adjacency List.
// step-3  calculate subtree sizes and return ans

class Solution {
public:
    vector<int> ans;
    vector<vector<int>> adj;
    vector<int> last;
    void build(int node, vector<vector<int>>& original, string& s) {
        int c = s[node] - 'a';
        int old = last[c];
        int p = (node == 0) ? -1 : (last[c] == -1 ? -1 : last[c]);
        if (node != 0) {
            if (p == -1)
                p = originalParent[node];
        }
        if (node != 0)
            adj[p].push_back(node);
        last[c] = node;
        for (int child : original[node])
            build(child, original, s);
        last[c] = old;
    }

    int originalParent[100005];
    int dfs(int node) {
        int count = 1;
        for (int child : adj[node]) {
            count += dfs(child);
        }
        return ans[node] = count;
    }

    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n = parent.size();
        adj.resize(n);
        ans.resize(n);
        last.assign(26, -1);
        vector<vector<int>> original(n);
        for (int i = 1; i < n; i++) {
            original[parent[i]].push_back(i);
            originalParent[i] = parent[i];
        }
        build(0, original, s);
        dfs(0);
        return ans;
    }
};