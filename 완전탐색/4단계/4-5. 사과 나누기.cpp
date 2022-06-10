#include<bits/stdc++.h>
using namespace std;
int N, arr[20];
long long ans = 2e9;
void f(int x, long long diff) // x-1번째 사과까지 골라서 남학생 사과 - 여학생 사과 무게 합이 diff인 상황
{
	if(x==N)
	{
		ans = min(ans, abs(diff)); return ;
	}
	f(x+1, diff+arr[x]);
	f(x+1, diff-arr[x]);
}
int main()
{
	cin>>N;
	for(int i=0; i<N; i++) cin>>arr[i];
	f(0,0);
	cout<<ans;
}
