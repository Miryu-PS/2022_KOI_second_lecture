#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int arr[555][555];
ll sum[555][555];
//sum[i][j] = arr[i][1~j] ÀÇ ÇÕ
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int N,M; cin>>N>>M;
	for(int i=1; i<=N; i++) for(int j=1; j<=M; j++)
	{
		cin>>arr[i][j];
		sum[i][j] = sum[i][j-1] + arr[i][j];
	}
	ll ans = -10005;
	for(int l=1; l<=M; l++) for(int r=l; r<=M; r++)
	{
		ll tmp = 0;
		for(int i=1; i<=N; i++)
		{
			tmp += (sum[i][r] - sum[i][l-1]);
			ans = max(ans, tmp);
			tmp = max(tmp, 0LL);
		}
	}
	cout<<ans;
}
