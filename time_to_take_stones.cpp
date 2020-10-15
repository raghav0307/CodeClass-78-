/* 
 * Problem Link: https://acm.timus.ru/problem.aspx?space=1&num=1087
 * Problem Name: Timus: 1087. The Time to Take Stones
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

	int state[20005];
	memset(state, -1, sizeof(state));
	state[0] = 1;

	int n, m;
	cin >> n >> m;

	int a[m];
	for(int i = 0; i < m; i++){
		cin >> a[i];
	}

	for(int i = 1; i < 10005; i++){
		int curstate = 0;
		for(int j = 0; j < m; j++){
			if(i-a[j] < 0)	continue;
			if(state[i-a[j]] == 0){
				curstate = 1;
				break;
			}
		}
		state[i] = curstate;
	}

	// for(int i = 0; i <= 20; i++){
	// 	cout << i << ": " << state[i] << "\n";
	// }

	if(state[n] == 1)	cout << "1\n";
	else cout << "2\n";

	return 0;
}