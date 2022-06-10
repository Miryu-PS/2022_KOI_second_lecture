#include<bits/stdc++.h>
using namespace std;
int arr[105];
int main()
{
	int n,m; cin>>n>>m;
	for(int i=1; i<=n; i++) arr[i]=i;
	for(int i=0; i<m; i++)
	{
		int A, B; cin>>A>>B;
		for(int l=A, r=B; l<r; l++,r--) swap(arr[l], arr[r]);
	}
	for(int i=1; i<=n; i++) cout<<arr[i]<<' ';
}
