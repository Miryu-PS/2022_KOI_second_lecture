#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N; string S; cin>>N>>S;
	int ans = 0;
	for(int i=0; i<N; i++)
	{
		string T; cin>>T;
		bool find = false;
		for(int start = 0; start < T.size(); start++)
			for(int gap = 1; start + gap * (S.size()-1) < T.size(); gap++)
			{
				bool chk = true;
				for(int j=0; j<S.size(); j++)
				{
					if(S[j] != T[start + gap * j]) chk = false;
				}
				if(chk==true) find = true;
			}
		if(find) ans++;
	}
	cout<<ans;
}
