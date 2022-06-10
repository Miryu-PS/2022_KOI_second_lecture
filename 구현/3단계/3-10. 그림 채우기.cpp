#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, c=1, cnt=0;
    cin >> n >> m;
    while(n%2==1 && m%2==1)
	{
        cnt+=c;
        c*=4; n/=2; m/=2;
    }
    cout << cnt;
}
