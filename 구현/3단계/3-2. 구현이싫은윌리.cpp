#include<bits/stdc++.h>
using namespace std;
int main()
{
    int C, K; cin>>C>>K;
    if(K==0) {cout<<C; return 0;}
    for(int i=1; i<K; i++) C/=10;
    if(C%10 <= 4) C -= C%10;
    else C += (10 - C%10);
    for(int i=1; i<K; i++) C*=10;
    cout<<C;
}
