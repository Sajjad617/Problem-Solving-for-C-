#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int mod = n%10;
        int div = n/10;
        cout << mod+div << endl;
    }
    return 0;
}