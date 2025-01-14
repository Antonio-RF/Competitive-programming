#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int x;
    int y;
    int z;

    cin >> x >> y >> z;

    int maior1;
    maior1 = (x + y + abs(x-y)) / 2;

    int maior_total;
    maior_total = (maior1 + z + abs(maior1 - z)) / 2;

    cout << maior_total << " eh o maior" << endl;

}