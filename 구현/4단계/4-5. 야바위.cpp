#include<bits/stdc++.h>
using namespace std;
int cupn[4]; // cupn[i] = i번 위치에 있는 컵의 번호
int cnt[4]; // cnt[j] = j번 컵을 골랐다면 얻게 될 점수
int main()
{
	int N; cin>>N;
	cupn[1]=1; cupn[2]=2; cupn[3]=3;
	for(int i=0; i<N; i++)
	{
		int a,b,g; cin>>a>>b>>g;
		swap(cupn[a], cupn[b]);
		cnt[cupn[g]]++;
	}
	cout<<max({cnt[1],cnt[2],cnt[3]});
	
}
