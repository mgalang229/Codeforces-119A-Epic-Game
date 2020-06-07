#include <bits/stdc++.h>

using namespace std;

int gcd(int d, int n){
	int r;
	while((r = d%n) != 0){
		d = n;
		n = r;
	}
	return n;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b, n;
	cin >> a >> b >> n;
	while(1){
		n -= gcd(a, n);
		if(n == 0){
			cout << 0;
			break;
		}
		n -= gcd(b, n);
		if(n == 0){
			cout << 1;
			break;
		}
	}
	cout << "\n";
	return 0;
}
