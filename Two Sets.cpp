#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int n;
	cin >> n;
	while(n--){
		//check base cases
		if(n==1||n==2||n==4){
			cout << "NO\n";
		}
		//check if sum of numbers up to n is odd
		if(n%2==1){
			cout << "NO\n";
		}else {
			ll remain=n/2;
			ll totalSum=n*(n+1)/2;
			vector<ll> a1, a2;
			
			//somehow print the number of elements in the set => count
			//somehow print the numbers that make each set
		}
	}
}



/*
1, 2 n
3 y
4, 5 , 6 n
7, 8 y
9, 10 n
11 y
12

6237 18
1458 18
33=>11 10 9 3
33=>8 7 6 5 4 2 1



1=1
12=3

123=6

1234=10
12345=15
123456=21

1234567=28
12345678=36

123456789=45 n
12345678910=55 n
1234567891011=66 y
123456789101112=78 y

*/