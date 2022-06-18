#include<bits/stdc++.h>
using namespace std;
int arr[100005], maxi[100005];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int N; cin>>N;
	for(int i=1; i<=N; i++) cin>>arr[i];
	for(int i=1; i<=N; i++) maxi[i] = max(maxi[i-1], arr[i]);
	// sum[i]에는 arr[1] ~ arr[i] 의 합이 저장
	int M; cin>>M;
	for(int i=1; i<=M; i++)
	{
		int x; cin>>x;
		cout<<maxi[x]<<'\n';
	}
}
