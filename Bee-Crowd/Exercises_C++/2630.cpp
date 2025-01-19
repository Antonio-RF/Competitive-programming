#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int qntd;
    cin >> qntd;
    for (int c = 1; c < qntd + 1; c++) {
        string operacao;
        cin >> operacao;
        int nm1, nm2, nm3;
        cin >> nm1 >> nm2 >> nm3;

        if (operacao == "min") {
            int menor = INT_MAX;
            if (nm1 < menor) {
                menor = nm1;
            }
            if (nm2 < menor) {
                menor = nm2;
            }
            if (nm3 < menor) {
                menor = nm3;
            }
            cout << "Caso #" << c << ": " << menor << endl;
        } 
        else if (operacao == "eye") {
            int p = 0.30 * nm1 + 0.59 * nm2 + 0.11 * nm3;
            cout << fixed << setprecision(0) << "Caso #" << c << ": " << p << endl;
        } 
        else if (operacao == "mean") {
            int mean = (nm1 + nm2 + nm3) / 3;
            cout << fixed << setprecision(0) << "Caso #" << c << ": " << mean << endl;
        } 
        else if (operacao == "max") {
            int maior = INT_MIN;
            if (nm1 > maior) {
                maior = nm1;
            }
            if (nm2 > maior) {
                maior = nm2;
            }
            if (nm3 > maior) {
                maior = nm3;
            }
            cout << "Caso #" << c << ": " << maior << endl;
        }
    }
    return 0;
}

