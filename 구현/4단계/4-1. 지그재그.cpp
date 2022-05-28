#include<bits/stdc++.h>
using namespace std;
vector<string> v[26];
int cnt[26];
int main()
{
	int K, N; cin>>K>>N;
	for(int i=0; i<K; i++) 
	{
		string s; cin>>s;
		char st = s[0];
		v[st - 'a'].push_back(s);
	}
	for(int i=0; i<26; i++) sort(v[i].begin(), v[i].end());
	while(N--)
	{
		char c; cin>>c;
		int x = c-'a';
		int y = cnt[x] % v[x].size();
		cout<<v[x][y]<<'\n';
		cnt[x]++;
	}
}
