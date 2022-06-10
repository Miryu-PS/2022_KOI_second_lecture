#include<bits/stdc++.h>
using namespace std;
int arr[200][14];
int cnum[200];
int main(){
	string s1;cin>>s1;
	for(int i = 0;i<s1.size();i+=3){
		char ch = s1[i];
		int num = (s1[i+1]-'0')*10 + (s1[i+2]-'0');
		arr[ch][num]++; cnum[ch]++;
		if(arr[ch][num] > 1) {cout<<"GRESKA"; return 0;}
	}

	cout<<	13-cnum['P']<<' '<<
			13-cnum['K']<<' '<<
			13-cnum['H']<<' '<<
			13-cnum['T'];
}
