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
	
	int qntd;
	cin >> qntd;
	while (qntd--) {
 
		string word1, word2;
		cin >> word1 >> word2;
 
		cout << word2[0] << word1[1] << word1[2] << " " << word1[0] << word2[1] << word2[2] << endl;
 
	}	

	
	return 0;
}

