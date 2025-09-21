//Problem 3: Largest prime factor
//The prime factors of 13195 are 5, 7, 13 and 29.

//What is the largest prime factor of the given number?
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
    long result =  largestPrimeFactor(n);
    cout << result << endl;
}
    cout << result << endl;
}
