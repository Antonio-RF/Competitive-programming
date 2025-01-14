#include <bits/stdc++.h>
using namespace std;

int main() {

    int qntd;
    cin >> qntd;

    string nome;
    int deu_saq, deu_block, deu_ataq, saq, block, ataq;
    int soma_s, soma_b, soma_a;
    int deu_soma_s, deu_soma_b, deu_soma_a;
    soma_s = 0;
    soma_b = 0;
    soma_a = 0;
    deu_soma_s = 0;
    deu_soma_b = 0;
    deu_soma_a = 0;

    for (int c = 0; c < qntd; c++) {
        cin >> nome;
        cin >> saq >> block >> ataq;
        cin >> deu_saq >> deu_block >> deu_ataq;

        soma_s += saq;
        soma_b += block;
        soma_a += ataq;

        deu_soma_s += deu_saq;
        deu_soma_b += deu_block;
        deu_soma_a += deu_ataq;
    }

    double media_s, media_b, media_a;
    media_s = (static_cast<double>(deu_soma_s) / soma_s) * 100;
    media_b = (static_cast<double>(deu_soma_b) / soma_b) * 100;
    media_a = (static_cast<double>(deu_soma_a) / soma_a) * 100;

    printf("Pontos de Saque: %.2f %%.\n", media_s);
    printf("Pontos de Bloqueio: %.2f %%.\n", media_b);
    printf("Pontos de Ataque: %.2f %%.\n", media_a);

    return 0;
}

