#include<bits/stdc++.h>
using namespace std;
int arr[100005], sum[100005];
int main()
{
	int N; cin>>N;
	for(int i=1; i<=N; i++)
	{
		cin>>arr[i];
		sum[i] = sum[i-1] + arr[i];
	}
	for(int i=1; i<=N; i++)
	{
		if(sum[i-1] == sum[N] - sum[i]) 
		{
			cout<<i; return 0;
		}
	}
	cout<<-1;
	return 0;
}
