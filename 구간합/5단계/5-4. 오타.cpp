#include<bits/stdc++.h>
using namespace std;
int sum[100005];
int main()
{
	string s; cin>>s;
	int n = s.size();
	s=' '+s;
	int mini = 0, wh = 0;
	for(int i=1; i<=n; i++)
	{
		sum[i] = sum[i-1] + (s[i] == '(' ? 1 : -1);
		if(mini > sum[i]) mini = sum[i], wh = i;
	}
	if(sum[n] == 2)
	{
		int where = 0, ans = 0;
		for(int i=1; i<=n; i++) 
		{
			if(sum[i] < 2) where = i;
		}
		for(int i=where+1; i<=n; i++)
		{
			if(s[i] == '(') ans++;
		}
		cout<<ans;
	}
	else if(sum[n] == -2)
	{
		int where = 0, ans = 0;
		for(int i=1; i<=n; i++)
		{
			if(sum[i] < 0) {where = i; break;}
		}
		for(int i=1; i<=where; i++)
		{
			if(s[i] == ')') ans++;
		}
		if(mini == -2) cout<<ans;
		else cout<<0;
	}
	else cout<<0;
}
