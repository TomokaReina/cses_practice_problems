#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	string s;
	cin >> s;

	char l='A';
	int ans=1, count=0;

	for(char c : s){
		if(c==l){
			++count;
			ans=max(count, ans);
		}
		else {
			l=c;
			count=1;
		}
	}
	cout << ans;
}