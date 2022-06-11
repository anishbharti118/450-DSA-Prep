//Given an array Arr[] of N integers.
//Find the contiguous sub-array(containing at least one number) 
// which has the maximum sum and return its sum.

#include<iostream>
using namespace std;

long int maxSubArraySum(int A[], int n){
    long int result = A[0];
    for(int i=1;i<n;++i){
        if(A[i]<result)  result=A[i];
    }
    long int max_ending_here = 0;

    for(int i=0;i<n;++i){
        max_ending_here = max_ending_here + A[i];
        if(result<max_ending_here)
            result = max_ending_here;
        
        if(max_ending_here<0)
            max_ending_here=0;
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;++i){
        cin>>A[i];
    }
    cout<<"Maximum Sum Subarray: "<<maxSubArraySum(A,n);
    return 0;
}