#include<bits/stdc++.h>
using namespace std;
int arr[100005], sum[100005], maxs[100005];
int main()
{
	int n; cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>arr[i];
		sum[i] = sum[i-1] + arr[i];
	}
	maxs[n] = sum[n];
	for(int i=n-1; i>=1; i--) maxs[i] = max(maxs[i+1], sum[i]);
	int ans = -1005;
	for(int i=1; i<=n; i++)
	{
		//i~x번의 합은 sum[x] - sum[i-1]
		// sum[x]의 최대값 -> maxs[i]
		ans = max(ans, maxs[i] - sum[i-1]);
	}
	cout<<ans;
}
