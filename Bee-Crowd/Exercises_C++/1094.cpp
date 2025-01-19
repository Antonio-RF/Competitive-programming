#include <iostream>
using namespace std;

int main() {

    int qntd_de_vezes;
    cin >> qntd_de_vezes;

    int n,count,soma,coelhos,ratos,sapos;
    double p_coelhos, p_ratos, p_sapos;
    string letra;

    soma = 0;
    coelhos = 0;
    ratos = 0;
    sapos = 0;
    count = 0;
    while (count < qntd_de_vezes) {
        cin >> n >> letra;

        if (letra == "C") {
            coelhos += n;
            soma += n;
        }
        else if (letra == "R") {
            ratos += n;
            soma += n;
        }
        else if (letra == "S") {
            sapos += n;
            soma += n;
        }
        count += 1;
    }

    p_coelhos = 100 * (1.0 * coelhos / soma);
    p_ratos = 100 * (1.0 * ratos / soma);
    p_sapos = 100 * (1.0 * sapos / soma);

    cout << "Total: " << soma << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    printf("Percentual de coelhos: %.2f %%\n",p_coelhos);
    printf("Percentual de ratos: %.2f %%\n",p_ratos);
    printf("Percentual de sapos: %.2f %%\n",p_sapos);
}