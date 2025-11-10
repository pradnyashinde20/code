#include<iostream>
#include <iomanip>
using namespace std;

long long binomialCoefficient(int n, int k) {
    long long res = 1;
    if (k > n - k) { // C(n, k) = C(n, n-k)
        k = n - k;
    }
    for (int i = 0; i < k; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
int main(){
    int rows;
cout<<"enter the value of rows"<<endl;
 cin>>rows;

 for(int i=0;i<rows;i++){
    for(int j=0;j<(rows-i-1);j++){
        cout<<setw(3)<<" ";
    }
    for(int k=0;k<=i;k++){
        cout<<setw(6)<<binomialCoefficient(i, k);
    }
    cout<<endl;
 }
}