
#include <iostream>
using namespace std;

int mystery(int n){
    if(n<=1)
        return 0;

    int k = n, i;
    for(i=1; i<=n; i++){
        k+=5;
    }
    return k*mystery(n/2) + 8*mystery(n/4);
}

int main(){
    int result = mystery(10);
    cout<<result;

    return 0;
}



