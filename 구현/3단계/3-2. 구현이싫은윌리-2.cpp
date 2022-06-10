#include <iostream>
using namespace std;
int main(){
    int c,k,t=1;
    cin >> c >> k;
    for(int i=0;i<k;i++){
        t*=10;
    }
	// c=12499, t = 1000
	c += t/2; // c = 12999
	c/=t; // c=12
	c*=t; // c=12000
	cout<<c;
}
