#include<bits/stdc++.h>
using namespace std;
int n,b, ans = 1987654321;
int arr[22];
void dfs(int x, int y) // x�� ���� �������� ���ؾ��ϰ�, ���ݱ��� ���� y��ŭ �����.
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
