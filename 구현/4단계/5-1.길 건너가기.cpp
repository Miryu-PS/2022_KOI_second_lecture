#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N, L; cin>>N>>L;
	int Time = 0, Location = 0;
	for(int i=0; i<N; i++)
	{
		int D, R, G; cin>>D>>R>>G;
		Time += (D-Location); Location = D; // Location -> D∑Œ ¿Ãµø
		if(Time % (R+G) < R) Time += (R - Time % (R+G));
	}
	Time += (L-Location);
	cout<<Time;
}

