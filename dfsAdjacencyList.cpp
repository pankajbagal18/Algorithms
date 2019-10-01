#include<bits/stdc++.h>

using namespace std;

void dfs(vector<int> graph[],int source,bool visited[])
{
    if(visited[source]==false)
        cout<<source+1<<" ";
    visited[source] = true;
    vector<int>::iterator it;
    for(it=graph[source].begin();it!=graph[source].end();it++)
    {
        if(visited[*it]==false)
            dfs(graph,*it,visited);
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> graph[n];
    int m;
    cin>>m;
    int temp1,temp2;
    for(int i=0;i<m;i++)
    {
        cin>>temp1>>temp2;
        graph[temp1-1].push_back(temp2-1);
        graph[temp2-1].push_back(temp1-1);
    }
    bool visited[n];
    memset(visited,false,sizeof(visited));
    dfs(graph,0,visited);
}
