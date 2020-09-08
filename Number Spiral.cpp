#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		ll y, x;
		cin >> y >> x;
		if(x>y){
			if(x%2){
				cout << x*x-y+1 << "\n";
			}else{
				cout << (x-1)*(x-1)+y << "\n";
			}
		}else{
			if(y%2){
				cout << (y-1)*(y-1)+x << "\n";
			}else{
				cout << y*y-x+1 << "\n";
			}
		}
	}
}