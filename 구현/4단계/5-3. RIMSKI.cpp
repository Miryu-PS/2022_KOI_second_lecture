#include<bits/stdc++.h>
using namespace std;
//���� �ǹ� I V X L C�� ����, ���� �޾ƿø�����
string a[10]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
string b[10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
int main()
{
	string s; cin>>s;
	sort(s.begin(), s.end());
	for(int i=1; i<100; i++)
	{
		string tmp=a[i%10] + b[i/10];
		sort(tmp.begin(), tmp.end());
		if(s==tmp) {cout<<b[i/10]+a[i%10]; return 0;}
	}
}

