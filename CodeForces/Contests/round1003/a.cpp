#include <bits/stdc++.h>
using namespace std;
 
 
#define endl '\n'
#define pb push_back
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	int t;
	cin >> t;
	while(t--) {
		string input;
		cin >> input;
		
		int tam = input.size();

		input.erase(tam-1);
		input[tam-2] = 'i';

		cout << input << endl;
	}


	return 0;
}

