#include <iostream>
using namespace std;

int main() {

    int count_i,count_j,c;
    c = 1;
    count_i = 1;
    count_j = 60;
    while (c <= 13) {
        cout << "I=" << count_i << " J=" << count_j << endl;
        count_i += 3;
        count_j -= 5;
        c += 1;
    }
}