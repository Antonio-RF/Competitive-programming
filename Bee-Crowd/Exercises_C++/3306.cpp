#include <bits/stdc++.h>
using namespace std;
 
 
#define endl '\n'
#define pb push_back
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int tam_vec, queries;
	cin >> tam_vec >> queries;
	
	int vector[tam_vec];
	for (int i=0 ; i<tam_vec ; i++) {
		cin >> vector[i];
	}

	while (queries--) {
		int option, pos1, pos2;
		cin >> option >> pos1 >> pos2;
		
		//colocar em posição do vetor.
		pos1--;
		pos2--;

		if (option == 2) {
			int resultado = 1;

		}
	}
	


	return 0;
}

