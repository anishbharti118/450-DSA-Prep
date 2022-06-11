#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n+1];
    for(int i=0;i<=n;++i)
        cin>>A[i];
    
    long int sum = n * (n+1) / 2;
    long int Asum = 0;
    for(int i=0;i<=n;++i)
        Asum += A[i];
    
    cout<<"Duplicate Element: "<<Asum-sum;
    return 0;
}