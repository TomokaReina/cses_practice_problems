#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int n;
	cin >> n;
	for(ll k=1; k<=n; ++k){
		ll place=(k*k)*(k*k-1)/2;
		if(k>2){
			place-=4*(k-1)*(k-2);
		}
		cout << place << "\n";
	}
}