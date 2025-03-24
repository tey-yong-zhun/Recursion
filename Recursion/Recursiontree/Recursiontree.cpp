#include <bits/stdc++.h>
using namespace std;

int fib(int n){

    if (n == 1 || n == 2)
        return n - 1;

    int res  = fib (n - 1) + fib (n - 2);
    return res;
}

int main(){
    cout << fib(3);
}