#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int renditja_kundert(int n, int a[], int i = 0) {

    if (i >= n) {
        return -1;
    } 
    if (i < n) {
        swap(a[i], a[n]);
    }
    
    return renditja_kundert(n - 1, a, i + 1);

}

int main() {
    int n,i;
    cout<<"Enter your array size:";
    cin>>n;
    int a[n];
    cout<<"Enter the Array Element:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"After reversing Array Element Are:";
    renditja_kundert(n-1 , a);
    for(i=0;i<n;i++)
    {
        cout << a[i];
    }


    return 0;
    
}