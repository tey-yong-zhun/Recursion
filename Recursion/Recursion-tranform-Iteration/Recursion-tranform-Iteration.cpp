#include <bits/stdc++.h>
using namespace std;

int forLoopRecur(int n) {

    stack <int> stack;
    int res = 0;

    for(int i = n; i > 0 ; i --){
        
        stack.push(i);

    }
    while(!stack.empty()){

        res += stack.top();
        stack.pop();
    }

    return res;
}

int main(){
    cout << forLoopRecur(3);
}