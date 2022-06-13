#include<iostream>
using namespace std;
#define R 4
#define C 4

void spiralPrint(int m, int n, int mat[R][C]){
    int i, k=0, l=0;
    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
    while(k<m && l<n){
        for(i=l;i<n;++i){
            cout<<mat[k][i]<<" ";
        }
        k++;
        
        for(i=k;i<m;++i){
            cout<<mat[i][n-1]<<" ";
        }
        n--;

        if(k<m){
            for(i=n-1;i>=l;--i){
                cout<<mat[m-1][i]<<" ";
            }
            m--;
        }

        if(l<n){
            for(i=m-1;i>=k;--i){
                cout<<mat[i][l]<<" ";
            }
            l++;
        }
    }
}

int main(){
    int mat[R][C] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};
    spiralPrint(R, C, mat);
    return 0;
}