#include <bits/stdc++>
using namespace std;

int tailRecur(int x, int n , int result){
    if (n == 0)
        return result;

    return power(x, n - 1, result * x);
}

int main(){
    cout << power(3, 4, 1);
    return 0;
}
    