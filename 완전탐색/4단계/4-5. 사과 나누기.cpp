#include<bits/stdc++.h>
using namespace std;
int N, arr[20];
long long ans = 2e9;
void f(int x, long long diff) // x-1��° ������� ��� ���л� ��� - ���л� ��� ���� ���� diff�� ��Ȳ
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
