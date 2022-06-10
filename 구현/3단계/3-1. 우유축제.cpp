#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N; cin>>N;
	int want = 0, drink = 0;
	for(int i=0; i<N; i++)
	{
		int x; cin>>x;
		if(want == x)
		{
			drink++;
			want = (want+1)%3;
		}
	}
	cout<<drink;
}
