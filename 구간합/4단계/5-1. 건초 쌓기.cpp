#include<bits/stdc++.h>
using namespace std;
int psum[1000005], arr[1000005];
int main()
{
	int N, K; cin>>N>>K;
	for(int i=0; i<K; i++)
	{
		int A,B; cin>>A>>B;
		psum[A]++; psum[B+1]--;
	}
	for(int i=1; i<=N; i++)
	{
		arr[i] = arr[i-1] + psum[i];
	}
	sort(arr+1, arr+N+1);
	cout<<arr[(N+1)/2];
}
