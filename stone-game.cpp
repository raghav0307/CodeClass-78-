/* 
 * Problem Link: https://acm.timus.ru/problem.aspx?space=1&num=1180
 * Problem Name: Timus: 1180. Stone Game
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

	string n;
	cin >> n;

	ll sum = 0;
	for(int i = 0; i < n.length(); i++){
		sum += n[i] - '0';
	}

	if(sum%3 == 0){
		cout << "2\n";
	}
	else if(sum%3 == 1){
		cout << "1\n1\n";
	}
	else{
		cout << "1\n2\n";
	}

	return 0;
}