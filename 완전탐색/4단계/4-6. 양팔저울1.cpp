#include<bits/stdc++.h>
using namespace std;
int N, W[11], arr[1200];
int ans = 0;
void f(int x, int weight) // x-1번 추까지 weight
{
	if(x==N)
	{
		if(weight > 0 && arr[weight] == 0)
		{
			arr[weight] = 1;
			ans++;
		}
		return ;
	}
	f(x+1, weight + W[x]);
	f(x+1, weight);
}
int main()
{
	cin>>N;
	for(int i=0; i<N; i++) cin>>W[i];
	f(0,0);
	cout<<ans;
}
