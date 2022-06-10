#include<bits/stdc++.h>
using namespace std;
int vst[9], arr[9], N, M;
void dfs(int x)
{
	if(x==M)
	{
		for(int i=0; i<M; i++) cout<<arr[i]<<' ';
		cout<<'\n'; return;
	}
	for(int i=1; i<=N; i++)
	{
		if(vst[i]) continue;
		vst[i] = true;
		arr[x] = i;
		dfs(x+1);
		vst[i] = false;
	}
}
int main()
{
	cin>>N>>M;
	dfs(0);
}
