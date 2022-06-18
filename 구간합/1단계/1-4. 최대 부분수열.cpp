#include<bits/stdc++.h>
using namespace std;
int arr[1005], sum[1005], maxs[1005];
int main()
{
	int T; cin>>T;
	while(T--)
	{
		int N; cin>>N;
		for(int i=1; i<=N; i++)
		{
			cin>>arr[i];
			sum[i] = sum[i-1] + arr[i];
		}
		maxs[N] = sum[N];
		for(int i=N-1; i>=1; i--)
		{
			maxs[i] = max(maxs[i+1], sum[i]);
		}
		int ans = -1005;
		for(int i=1; i<=N; i++)
		{
			ans = max(ans, maxs[i] - sum[i-1]);
		}
		cout<<ans<<'\n';
	}
}
