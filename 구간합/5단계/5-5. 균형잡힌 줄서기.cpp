#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int sum[100005];
pii people[100005];
int sumchk[200005];
int main()
{
	memset(sumchk, -1, sizeof(sumchk));
	int n; cin>>n;
	for(int i=1; i<=n; i++) cin>>people[i].first>>people[i].second;
	sort(people+1, people+n+1, [](pii x, pii y){return x.second<y.second;});
	sum[0] = 100000; sumchk[100000] = 0;
	int ans = 0;
	for(int i=1; i<=n; i++)
	{
		sum[i] = sum[i-1] + (people[i].first == 1 ? 1 : -1);
		if(sumchk[sum[i]] == -1) sumchk[sum[i]] = i;
		else
		{
			// sum[i] == sum[sumchk[sum[i]]]
			// sumchk[sum[i]]+1 ~ i 구간이 답의 후보
			ans = max(ans, people[i].second - people[sumchk[sum[i]]+1].second);
		}
	}
	cout<<ans;
}
