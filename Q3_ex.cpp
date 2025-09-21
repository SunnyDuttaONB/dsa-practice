#include <iostream>
using namespace std;
long largestPrimeFactor(long n){
    long maxPrime = -1;
    while(n%2==0){
        maxPrime = 2;
        n /= 2;
    }
    for(int i=3;i*i<=n;i += 2){
        if(n%i==0){
            maxPrime = i;
            while(n%i==0){
                n /= i;
            }
        }
    }
    if(n > 2){
        maxPrime = n;
    }
    return maxPrime;
}
int main(){
    long n;
    cin >> n;
    if(n%2==0){
        cout << 2 << " " ;
        while(n%2==0){
            n /= 2;
        }
    }
    for(int i=3;i*i<=n;i += 2){
        if(n%i==0){
            cout << i << " ";
            while(n%i==0){
                n /= i;
                
            }
        }
    }
    if(n > 2){
        cout << n << endl;
    }
    cout << largestPrimeFactor(n) << endl;
    
}
