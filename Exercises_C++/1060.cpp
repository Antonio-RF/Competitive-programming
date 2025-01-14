#include <iostream>
using namespace std;

int main() {

    float k;
    int n, count_positivos;
    n = 1;
    count_positivos = 0;
    while (n != 7) {
        cin >> k;
        if (k > 0) {
            count_positivos += 1;
        }
        n += 1;
    }


printf("%d valores positivos\n", count_positivos);

}