#include <iostream>
using namespace std;

int main() {

    int gols_gremio,gols_inter,count,ler_de_novo,v_inter,v_grem,i,g,empates;
    count = 0;
    ler_de_novo = 1;
    v_inter = 0;
    v_grem = 0;
    empates = 0;

    while (ler_de_novo == 1){
        cin >> i >> g;

        if (i > g) {
            v_inter += 1;
        }
        else if (i < g) {
            v_grem += 1;
        }
        else if (i == g){
            empates += 1;
        }

        count += 1;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> ler_de_novo;
    }

    cout << count << " grenais" << endl;
    cout << "Inter:" << v_inter << endl;
    cout << "Gremio:" << v_grem << endl;
    cout << "Empates:" << empates << endl;
    
    if (v_inter > v_grem) {
        cout << "Inter venceu mais" << endl;
    }
    else if (v_inter < v_grem) {
        cout << "Gremio venceu mais" << endl;
    }
    else {
        cout << "Nao houve vencedor" << endl;
    }

}