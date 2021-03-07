#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, mx;

    cin >> a >> b;

    if (a > b){
       mx = a;
    }else{
       mx = b;
    }

    cout << mx << "\n";
    return 0;
}
