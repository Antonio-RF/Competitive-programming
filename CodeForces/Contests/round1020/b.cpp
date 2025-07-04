#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;

		int maior_a = -1;
		int menor_a = k+1;

		vector<int> vector_a(n);
		for (int i=0 ; i<n ; i++) {
			cin >> vector_a[i];
			if (vector_a[i] > maior_a)
				maior_a = vector_a[i];
			if (vector_a[i] < menor_a)
				menor_a = vector_a[i];
		}

		bool confere_dif = false;
		int salva_sum = -1;
		bool confere_principal = true;
		vector<int> vector_b(n);
		for (int j=0 ; j<n ; j++) {
			cin >> vector_b[j];
			if (vector_b[j] != -1 && !confere_dif) {
				salva_sum = vector_b[j] + vector_a[j];
				confere_dif = true;
			}
			else if (vector_b[j] != -1) {
				if (vector_b[j]+vector_a[j] != salva_sum)
					confere_principal = false;
			}
		}

		int result;
		if (!confere_principal) {
			result = 0;
		}
		else if (!confere_dif)
			result = k-(maior_a-1-menor_a);
		else
			for (int i=0 ; i<n ; i++) {
				
			}

		cout << result << endl;
	}


    return 0;
}


