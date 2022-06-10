#include<bits/stdc++.h>
using namespace std;
int arr[105];
int main()
{
	int N, Len; cin>>N>>Len;
	for(int i=0; i<N; i++) cin>>arr[i];
	sort(arr, arr+N);
	int ans = 0;
	for(int fold = 0; fold < N; fold++)
	{
		bool chk = (arr[fold] != 0 && arr[fold] != Len);
		for(int L = fold, R = fold; L>=0 && R<N ; L--,R++)
		{
			if(arr[R] - arr[fold] != arr[fold] - arr[L]) chk=false;
		}
		if(chk) ans++;
		chk = (fold+1 < N);
		for(int L=fold, R=fold+1; L>=0 && R<N; L--,R++)
		{
			if(arr[L] + arr[R] != arr[fold] + arr[fold+1]) chk=false;
		}
		if(chk) ans++;
	}
	cout<<ans;
}
