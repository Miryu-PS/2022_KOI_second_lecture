#include<bits/stdc++.h>
using namespace std;
int arr[9], N, M;
void dfs(int x, int mini) // x��° ���� �ּ� mini �̻󿡼� ���� ��
{
	if(x==M)
	{
		for(int i=0; i<M; i++) cout<<arr[i]<<' ';
		cout<<'\n'; return;
	}
	for(int i=mini; i<=N; i++)
	{
		arr[x] = i;
		dfs(x+1, i+1);
	}
}
int main()
{
	cin>>N>>M;
	dfs(0, 1);
}
