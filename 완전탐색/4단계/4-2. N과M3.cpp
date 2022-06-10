#include <bits/stdc++.h>
using namespace std;
int arr[10];
int n, m;
void dfs(int x)
{
    if(x==m)
    {
        for(int i=0; i<m; i++) cout<<arr[i]<<" ";
        cout<<"\n"; return ;
    }
    for(int i=1; i<=n; i++)
    {
        arr[x]=i;
        dfs(x+1);
        arr[x]=0;
    }
}
int main()
{ 
    cin>>n>>m;
    dfs(0);
}
