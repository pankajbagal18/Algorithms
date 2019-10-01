#include<bits/stdc++.h>

using namespace std;

void bfs(vector<int> graph[],int source,bool visited[])
{
    queue<int> q;
    q.push(source);
    while(q.empty()==false)
    {
        int temp = q.front();
        q.pop();
        vector<int>::iterator it;
        visited[temp] = true;
        cout<<temp+1<<" ";
        for(it=graph[temp].begin();it!=graph[temp].end();it++)
        {
            if(visited[*it]==false)
                q.push(*it);
        }
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
    bfs(graph,0,visited);
}
