/* 
 * Problem Link: https://acm.timus.ru/problem.aspx?space=1&num=2068
 * Problem Name: Timus: 2068. Game of Nuts
 */

#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back

using namespace std;

typedef long long ll;

int main(){

	#ifndef ONLINE_JUDGE
   		// for getting input from input.txt
    	freopen("input.txt", "r", stdin);
    	// for writing output to output.txt
    	freopen("output.txt", "w", stdout);
	#endif
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int xr = 0;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		if(a%4 == 1)	a = 0;
		else a = 1;
		xr ^= a;
	}
	if(xr)	cout << "Daenerys\n";
	else cout << "Stannis\n";

	return 0;
}