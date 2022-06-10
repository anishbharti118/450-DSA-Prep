#include <stdio.h>

void sort012(int a[], int n)
{
    int c0=0, c1=0, c2=0;
    for(int i=0;i<n;++i){
        switch(a[i]){
            case 0: c0++;
                    break;
            case 1: c1++;
                    break;
            case 2: c2++;
                    break;
            default:break;
        }
    }
    int i;
    for(i=0;i<c0;++i)   a[i]=0;
    for(;i<c0+c1;++i)   a[i]=1;
    for(;i<n;++i)       a[i]=2;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    sort012(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
