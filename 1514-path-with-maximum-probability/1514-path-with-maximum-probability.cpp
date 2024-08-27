class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        setprecision(5);
        //bellmann ford
        //n = no. of vertices
        //size of edges[][] and size of succProb[] is same
        int m = edges.size();
        vector<double> dist(n);
        dist[start_node] = 1.0;
        for(int i=0;i<n-1;i++){
            bool flag = false;
            for(int j=0;j<m;j++){
                int u = edges[j][0];
                int v = edges[j][1];
                double wt = succProb[j];
                if(dist[u]*wt>dist[v]){
                    dist[v] = dist[u] * wt;
                    flag = true;
                }
                if(dist[v]*wt>dist[u]){
                    dist[u] = dist[v] * wt;
                    flag = true;
                }
            }
            if(!flag) break;
        }
        return dist[end_node];
    }
};