#include<iostream>
using namespace std;
int fact(int a){
    if(a<=1){
        return 1;
    }
    return  a * fact(a-1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int r;
    cout<<"Enter r : ";
    cin>>r;
int combination = fact(n)/(fact(r)*fact(n-r));
int permutation = fact(n)/fact(n-r);
cout<<"Combination is : "<<combination<<endl;
cout<<"Permutation is : "<<permutation<<endl;
}