#include<bits/stdc++.h>
using namespace std;
int w[20], c, n, ans;
void f(int x, int weight) // ���� x���� ������, weight��ŭ ���Դ�.
{
	if(weight > c) return ;
	ans = max(ans, weight);
	if(x == n+1) return ;
	
	f(x+1, weight + w[x]);
	f(x+1, weight);
}
int main()
{
	cin>>c>>n; for(int i=1; i<=n; i++) cin>>w[i]; 
	f(1,0);
	cout<<ans;
}
