#include<bits/stdc++.h>
using namespace std;
int cupn[4]; // cupn[i] = i�� ��ġ�� �ִ� ���� ��ȣ
int cnt[4]; // cnt[j] = j�� ���� ����ٸ� ��� �� ����
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
