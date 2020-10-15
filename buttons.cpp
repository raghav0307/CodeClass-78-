/* 
 * Problem Link: https://acm.timus.ru/problem.aspx?space=1&num=1023
 * Problem Name: Timus: 1023. Buttons
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

	ll k;
	cin >> k;

	for(int i = 3; i <= k; i++){
		if(k%i == 0){
			cout << i-1 << "\n";
			return 0;
		}
	}
	cout << k-1 << "\n";

	return 0;
}