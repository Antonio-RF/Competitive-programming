#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int linha,coluna;
	cin >> linha >> coluna;
	
	int vetor[linha][2];
	int count_linha = 0;
	int matriz[linha][coluna];

	for (int i=0 ; i<linha ; i++) {
		for (int j=0 ; j<coluna ; j++) {
			cin >> matriz[i][j];
			if (matriz[i][j] == 42) {
				vetor[count_linha][0] = i;
				vetor[count_linha][1] = j;
				count_linha += 1;
			}
		}
	}
	
	int resultado_i = 0;
	int resultado_j = 0;
	
	for (int i=0 ; i<count_linha ; i++) {
            
			if (matriz[vetor[i][0]-1][vetor[i][1]-1] == 7 && matriz[vetor[i][0]-1][vetor[i][1]] == 7 && matriz[vetor[i][0]-1][vetor[i][1]+1] == 7 && matriz[vetor[i][0]][vetor[i][1]-1] == 7 && matriz[vetor[i][0]][vetor[i][1]+1] == 7 && matriz[vetor[i][0]+1][vetor[i][1]-1] == 7 && matriz[vetor[i][0]+1][vetor[i][1]] == 7 && matriz[vetor[i][0]+1][vetor[i][1]+1] == 7) {
			resultado_i = vetor[i][0]+1;
			resultado_j = vetor[i][1]+1;
			break;
			}
		}
	
	cout << resultado_i << " " << resultado_j << endl;

}
