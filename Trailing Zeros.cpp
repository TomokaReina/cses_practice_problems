#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll n, t=0;
	ll factorial=1;
	cin >> n;

	for(int i=1; i<=n; ++i){
		factorial*=i;
	}
	while(factorial%10){
		factorial/=(ll)10;
		++t;
	}

	cout << t;
}