#include <iostream>
#include <limits.h>
using namespace std;
int setmini(int A[], int N){
    int mini = INT_MAX;
    for(int i=0;i<N;i++){
        if(A[i] < mini){
            mini = A[i];
        }
    }
    return mini;
}
int setmaxi(int A[], int N){
    int maxi = INT_MIN;
    for(int i=0;i<N;i++){
        if(A[i] > maxi){
            maxi = A[i];
        }
    }
    return maxi;
}
int main(){
    int N,i;
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int i=0;i<N;i++){
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Minimum Element: " << setmini(A,N) << endl;
    cout << "Maximum Element: " << setmaxi(A,N) << endl;
}
