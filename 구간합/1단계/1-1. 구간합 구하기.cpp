#include<bits/stdc++.h>
using namespace std;
int arr[100005], sum[100005];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int N,M; cin>>N>>M;
	for(int i=1; i<=N; i++) cin>>arr[i];
	for(int i=1; i<=N; i++) sum[i] = sum[i-1] + arr[i];
	// sum[i]���� arr[1] ~ arr[i] �� ���� ����
	
	for(int i=1; i<=M; i++)
	{
		int x,y; cin>>x>>y;
		//x~y���� ���� 1~y���� �տ��� 1~(x-1)���� ���� ���� ���� �� �ִ�.
		cout<<sum[y] - sum[x-1] <<'\n';
	}
}
