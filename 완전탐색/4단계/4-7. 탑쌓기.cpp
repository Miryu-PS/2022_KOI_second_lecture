#include<bits/stdc++.h>
using namespace std;
int n,b, ans = 1987654321;
int arr[22];
void dfs(int x, int y) // x번 블럭을 쓸지말지 정해야하고, 지금까지 높이 y만큼 골랐다.
{
	if(x==n+1)
	{
		if(y >= b && ans > y) ans = y;
		return ;
	}
	dfs(x+1, y+arr[x]);
	dfs(x+1, y);
}
int main()
{
	cin>>n>>b;
	for(int i=1; i<=n; i++) cin>>arr[i];
	dfs(1, 0);
	cout<<ans-b;
}
