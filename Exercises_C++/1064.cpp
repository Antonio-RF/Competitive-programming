#include <iostream>
using namespace std;

int main() {

    float k;
    double soma;
    int n, count_positivos;
    n = 1;
    soma = 0;
    count_positivos = 0;
    while (n != 7) {
        cin >> k;
        if (k > 0) {
            count_positivos += 1;
            soma += k;
        }
        n += 1;
    }

double media;
media = soma / count_positivos;

printf("%d valores positivos\n", count_positivos);
printf("%.1f\n", media);

}