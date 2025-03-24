#include <bits/stdc++.h>
using namespace std;

int recur(int n){
    if (n == 1)
        return 1;

    int res = recur(n-1);

    return n + res;
}

int main (){
    cout << recur(3);
}