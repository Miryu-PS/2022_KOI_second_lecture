#include<bits/stdc++.h>
using namespace std;
int sum[100005];
int main()
{
	string s; cin>>s; int n = s.size(); s=' '+s;
	int mini = 0, ans = 0;
	for(int i=1; i<=n; i++)
	{
		sum[i] = sum[i-1] + (s[i] == '(' ? 1 : -1);
		if(mini > sum[i]) mini = sum[i];
	}
	if(sum[n] == 2)
	{
		for(int i=1; i<=n; i++) 
		{
			if(s[i] == '(') ans++;
			if(sum[i] < 2) ans = 0;
		}
		cout<<ans * (mini >= 0);
	}
	else if(sum[n] == -2)
	{
		for(int i=1; i<=n; i++)
		{
			if(s[i] == ')') ans++;
			if(sum[i] < 0) break;
		}
		cout<<ans * (mini == -2);
	}
	else cout<<0;
}
