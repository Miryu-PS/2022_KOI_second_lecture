#include<bits/stdc++.h>
using namespace std;
vector<string> v[200];
int cnt[200];
int main()
{
	int K, N; cin>>K>>N;
	for(int i=0; i<K; i++) 
	{
		string s; cin>>s;
		char st = s[0];
		v[st].push_back(s);
	}
	for(int i='a'; i<'z'; i++) sort(v[i].begin(), v[i].end());
	while(N--)
	{
		char x; cin>>x;
		int y = cnt[x] % v[x].size();
		cout<<v[x][y]<<'\n';
		cnt[x]++;
	}
}
