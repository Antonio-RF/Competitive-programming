#include <iostream>
using namespace std;

int main() {

    int numero,count;
    cin >> numero;
    count = 0;
    while (count < numero){
    
    double a,b,c,media;
    cin >> a >> b >> c;
    media = ((a * 2) + (b * 3) + (c * 5)) / 10;

    printf("%.1f\n", media);

    count += 1;
    }
}
