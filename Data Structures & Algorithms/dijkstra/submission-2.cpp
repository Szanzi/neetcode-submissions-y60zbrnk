class Solution {
public:
    unordered_map<int, int> shortestPath(int n, vector<vector<int>>& edges, int src) {
        unordered_map<int, int> dist;
        vector<vector<pair<int, int>>> adj(n);
        for (int i = 0; i < n; i++) {
            dist[i] = INT_MAX;
        }
        for (const auto& edge : edges) {
            adj[edge[0]].push_back({edge[1], edge[2]});
        }
        // for(const auto& node : adj) {
        //     for (const auto & neigh : node) {
        //         cout << neigh.second << ' ';
        //     }cout << '\n';
        // }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        dist[src] = 0;
        pq.push({0, src});
        while(!pq.empty()) {
            auto [d, node] = pq.top();
            pq.pop();
            if (d > dist[node]) {
                continue;
            }
            for (const auto& [neigh, weight] : adj[node]) {
                    //cout << weight << ' ' << neigh << '\n';
                    if (dist[node] + weight < dist[neigh]) {
                        dist[neigh] = dist[node] + weight;
                        pq.push({dist[neigh], neigh});
                    }
            }
        }
        for (auto& [key, value] : dist) {
            if (value == INT_MAX) {
                value = -1;
            }
        }
        return dist;
    }
};
