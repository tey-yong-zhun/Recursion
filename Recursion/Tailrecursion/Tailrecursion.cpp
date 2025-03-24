#include <bits/stdc++.h>
using namespace std;

int tailRecur(int n, int res){

    if (n == 0)
        return res;

    return tailRecur(n - 1, res + n);
}

int main(){
    cout << tailRecur(3 , 0);
}