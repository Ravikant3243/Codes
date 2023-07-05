 vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
         vector<pair<int,int>>graph[V];
         for(int i=0;i<V;i++){
              for(int j=0;j<adj[i].size();j++){
                    graph[i].push_back({adj[i][j][0],adj[i][j][1]});
              }
         }
         
           vector<int>dis(V,1e9);
            dis[S]=0;
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
             q.push({0,S});
             while(!q.empty()){
                  pair<int,int>curr=q.top();
                   q.pop();
                   int node=curr.second;
                   int d=curr.first;
                  for(auto e:graph[node]){
                        if(dis[e.first]>d+e.second){
                             dis[e.first]=d+e.second;
                             q.push({dis[e.first],e.first});
                        }  
                              
                  } 
                   
             }
              return dis;
              
    }
