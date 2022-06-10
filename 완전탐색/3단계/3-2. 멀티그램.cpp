#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin>>s;
	for(int i=1; i<s.size(); i++)
	{
		if(s.size()%i) continue; // i로 나누어떨어지지 않으면 패스
		string t = s.substr(0, i); sort(t.begin(), t.end());
		bool chk = true;
		for(int j=i; j<s.size() && chk; j+=i)
		{
			string tmp = s.substr(j, i);
			sort(tmp.begin(), tmp.end());
			if(t != tmp) chk=false;
		}
		if(chk)
		{
			cout<<s.substr(0,i); return 0;
		}
	}
	cout<<-1;
}
