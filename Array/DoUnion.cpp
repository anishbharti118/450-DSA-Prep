#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    // code here
    sort(a, a + n);
    sort(b, b + m);
    int Union[m + n];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            Union[k++] = a[i++];
        }
        else if (a[i] > b[j])
        {
            Union[k++] = b[j++];
        }
        else
        {
            Union[k++] = a[i++];
            j++;
        }
    }
    while (i < n)
        Union[k++] = a[i++];
    while (j < m)
        Union[k++] = b[j++];
    int c = 1;
    for (i = 1; i < k; ++i)
    {
        if (Union[i] != Union[i - 1])
            c++;
    }
    return c;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];
    cout << doUnion(a, n, b, m) << endl;

    return 0;
}