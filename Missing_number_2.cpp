#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0 ; i < n-1; i++)
    {
        cin >> arr[i];
    }
    long long z = (long long)n*(n+1)/2;
    long long y = 0;
    
    for (int j = 0; j < n-1 ; j++ )
    {
        y += arr[j];
    }
    cout << z-y;
    return 0;
}