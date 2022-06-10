#include<bits/stdc++.h>
using namespace std;
int main()
{
	int K, N; cin>>K>>N;
	int LT = 210;
	while(N--)
	{
		int T; char Z; cin>>T>>Z;
		if(LT-T <= 0)
		{
			cout<<K; return 0;
		}
		LT-=T;
		if(Z=='T') K = K%8+1;
	}
}
