#include <bits/stdc++.h>
using namespace std;
 
int vetor[500];
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	int qntd;
	cin >> qntd;
	while(qntd--) {
    		int num;
		cin >> num;
		cin.ignore();
		for (int k=0 ; k<num ; k++) {
			string frase;
			getline(cin, frase);
			
			int count = 1;
			char caracter = '#';
			for (char c: frase) {
				if (c == caracter) {
					vetor[k] = count;
					break;
				}
				else {
					count += 1;
				}
			}
		}
		
		for (int u=num-1 ; u>=0 ; u--) {
			cout << vetor[u] << " ";
		}
		
		cout << "\n";
	}
}