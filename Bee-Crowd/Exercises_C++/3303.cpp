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
 
	string input;
	cin >> input;
	
	int tam;
	tam = input.size();
	if (tam >= 10) cout << "palavrao" << endl;
	else cout << "palavrinha" << endl;


	return 0;
}

