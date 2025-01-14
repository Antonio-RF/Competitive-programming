#include <bits/stdc++.h>
using namespace std;

string vetor_entrada[12345];

void pesquisa(string palavra, int qntd1);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int qntd1;
    cin >> qntd1;
    for (int c = 0; c < qntd1; c++) {
        cin >> vetor_entrada[c];
    }

    int qntd2;
    cin >> qntd2;
    for (int i = 0; i < qntd2; i++) {
        string palavra;
        cin >> palavra;
        pesquisa(palavra, qntd1);
    }

    return 0;
}

void pesquisa(string palavra, int qntd1) {

	int count = 0;
	int tamanho = 0;
    for (int k = 0; k < qntd1; k++) {
        string entrada = vetor_entrada[k];  
        if (entrada.find(palavra) == 0) {
			int novo = entrada.length();
			if (novo > tamanho) {
				tamanho = novo;
			}
            count += 1;
        }
    }
	if (count == 0) {
		count = -1;
		cout << count << endl;
	}
	else {
		cout << count << " " << tamanho << endl;
	}
}

