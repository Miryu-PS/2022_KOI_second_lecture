#include<bits/stdc++.h>
using namespace std;
int n,a,b,c;
int asum[200005], bsum[200005], csum[200005];
int main()
{
	string s;
	cin>>n>>s;
	for(int i=0; i<n; i++)
	{
		if(s[i] == 'A') a++;
		else if(s[i] == 'B') b++;
		else c++;
	}
	s+=s; s=' '+s;
	for(int i=1; i<=2*n; i++)
	{
		asum[i] = asum[i-1] + (s[i] == 'A');
		bsum[i] = bsum[i-1] + (s[i] == 'B');
		csum[i] = csum[i-1] + (s[i] == 'C');
	}
	int ans = 0;
	for(int i=0; i<n; i++)
	{
		//A : i+1~i+a, B: i+a+1 ~ i+a+b, C: i+a+b+1 ~ i+n
		int tmp = asum[i+a] - asum[i] + bsum[i+a+b] - bsum[i+a] + csum[i+n] - csum[i+a+b];
		ans = max(ans, tmp);
		//A : i+1~i+a, C: i+a+1 ~ i+a+c, B: i+a+c+1 ~ i+n
		tmp = asum[i+a] - asum[i] + csum[i+a+c] - csum[i+a] + bsum[i+n] - bsum[i+a+c];
		ans = max(ans, tmp);
	}
	cout<<n-ans;
}
