#include<bits/stdc++.h>

using namespace std;
int graph[100][100];
void dfsUtil(int graph[][100],bool visited[],int source,int n){
    if(visited[source]==false)
        cout<<source+1<<" ";
    visited[source] = true;
    for(int i=0;i<n;i++)
    {
        if(graph[source][i]==1&&visited[i]==false)
            dfsUtil(graph,visited,i,n);
    }
}

void dfs(int graph[][100],int n)
{
    bool visited[n];
    memset(visited,false,sizeof(visited));
    dfsUtil(graph,visited,0,n);
}

int main() {
    int n;
    cout<<"Enter number of vertices : ";
    cin>>n;
    int m;
    cout<<"Enter number of edges : ";
    cin>>m;
    memset(graph,0,sizeof(graph));
    cout<<"Enter source and destination : ";
    for(int i=0;i<m;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        graph[temp1-1][temp2-1] = 1;
        graph[temp2-1][temp1-1] = 1;
    }
    dfs(graph,n);
}
