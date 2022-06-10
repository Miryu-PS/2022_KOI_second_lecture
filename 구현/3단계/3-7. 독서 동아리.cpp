#include<iostream>
#include<algorithm>
using namespace std;
int Q[50001][51];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
    int n,q,p,count=0;
    pair<int,int> a[11];
    bool t=true;
    cin >> n >> q >> p;
    for(int i=1; i<=n; i++) for(int j=1; j<=q; j++)
    	cin >> Q[i][j];
    
    for(int i=0; i<p; i++)
        cin >> a[i].first >> a[i].second;
    
    for(int i=1; i<=n; i++)
    {
		t = true;
		for(int j=0; j<p; j++)
		{
			if(Q[i][a[j].first] != a[j].second )
			{
				t = false;
				break;
			}
		}
		if(t == true)
			count++;
    }
    cout << count;
}
