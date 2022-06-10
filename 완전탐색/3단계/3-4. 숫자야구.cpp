#include<bits/stdc++.h>
using namespace std;
int arr[105], st[105], ba[105];
int main()
{
	int N; cin>>N;
	for(int i=0; i<N; i++) cin>>arr[i]>>st[i]>>ba[i];
	int ans = 0;
	for(int i=1; i<=9; i++)	for(int j=1; j<=9; j++)	for(int k=1; k<=9; k++)
	{
		if(i==j || j==k || k==i) continue;
		bool chk = true;
		for(int ii = 0; ii < N && chk; ii++)
		{
			int ST, BA;
			int A=arr[ii]/100;
			int B=(arr[ii]/10)%10;
			int C=arr[ii]%10;
			ST = (i==A) + (j==B) + (k==C);
			BA = (i==B) + (i==C) + (j==A) + (j==C) + (k==A) + (k==B);
			if(ST != st[ii] || BA != ba[ii]) chk=false;
		}
		if(chk==true) ans++;
	}
	cout<<ans;
}
