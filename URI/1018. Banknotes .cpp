#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    cout << n << endl;

    int note [7] = {100, 50, 20, 10, 5, 2, 1};
    for(int i = 0; i<7; i++){
        cout << n/note[i] << " nota(s) de R$ " << note[i] << ",00" << endl;
        n = n%note[i];
    }

/*
    cout << n/100 << " nota(s) de R$ 100,00" << endl;
    n = n%100;

    cout << n/50 << " nota(s) de R$ 50,00" << endl;
    n = n%50;

    cout << n/20 << " nota(s) de R$ 20,00" << endl;
    n = n%20;

    cout << n/10 << " nota(s) de R$ 10,00" << endl;
    n = n%10;

    cout << n/5 << " nota(s) de R$ 5,00" << endl;
    n = n%5;

    cout << n/2 << " nota(s) de R$ 2,00" << endl;
    n = n%2;

    cout << n << " nota(s) de R$ 1,00" << endl;
*/
    return 0;
}

