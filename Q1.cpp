//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

//Find the sum of all the multiples of 3 or 5 below the provided parameter value number.

#include <iostream>
using namespace std;
int multiplesOf3or5(int num){
    int sum = 0;
    for(int i=0;i<num;i++){
        if(i%3==0 || i%5==0){
            sum += i;
        }
    }
    return sum;
}
int main(){
    int n;
    int result;
    cin >> n;
    result = multiplesOf3or5(n);
    cout << result << endl;
}
