#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    if (n == 0)
        return 0;

    int res = sumOfDigits(n/10) + (n % 10);
    return res;
}

int main(){
    cout << sumOfDigits(420020321);
}
