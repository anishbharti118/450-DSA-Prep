#include<iostream>
using namespace std;

void segregateElements(int arr[], int n)
{
    int temp[n];
    int k = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > 0)
        {
            temp[k] = arr[i];
            k++;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0)
        {
            temp[k] = arr[i];
            k++;
        }
    }
    for (int i = 0; i < n; ++i)
        arr[i] = temp[i];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    segregateElements(arr, n);
    
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
