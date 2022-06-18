#include<bits/stdc++.h>
using namespace std;
int arr[100005],sum[100005];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n,k; cin>>n>>k;
	for(int i=1; i<=n; i++) {
		cin>>arr[i];
		sum[i] = sum[i-1] + arr[i];
	}
	int ans = -10000005;
	for(int i=1; i+k-1 <= n; i++)
	{
		int tmp = sum[i+k-1] - sum[i-1]; // i~(i+k-1)ÀÇ ÇÕ
		ans = max(ans, tmp);
	}
	cout<<ans;
}
