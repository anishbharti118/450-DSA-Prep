#include<iostream>
#include<climits>
#include<random>
using namespace std;

void swap(int *a, int *b){
    int t=*a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int l, int r){
    int x = arr[r], i=l;
    for(int j=i;j<r;++j){
        if(arr[j]<=x){
            swap(&arr[j], &arr[i]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}

int randomPartition(int arr[], int l, int r){
    int n = r-l+1;
    int pivot = rand()%n;
    swap(&arr[r], &arr[pivot+l]);
    return partition(arr, l, r);
}

int kthSmallest(int arr[], int l, int r, int k){
    if(k>0 && k<=r-l+1){
        int pos = randomPartition(arr, l, r);
    
        if(pos-l == k-1)    return arr[pos];
        else if(pos-l > k-1)    return kthSmallest(arr, l, pos-1, k);
        else    return kthSmallest(arr, pos+1, r, k-pos+l-1);
    }
    return INT_MAX;
}

int main(){
    int arr[] = {12, 3, 5, 7, 4, 19, 26};
    int n = sizeof(arr)/sizeof(arr[0]), k = 3;
    cout << "K'th smallest element is " << kthSmallest(arr, 0, n-1, k);
    cout << "\nK'th largest element is " << kthSmallest(arr, 0, n-1, n-k+1);
    return 0;
}