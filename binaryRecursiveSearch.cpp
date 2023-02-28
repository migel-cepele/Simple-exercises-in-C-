#include <bits/stdc++.h>
#include <time.h>
#include <iostream>
#include <array>
#include <chrono>
using namespace std;
using namespace std::chrono;


int BinarySearch(int arr[], int m, int d, int x)
{
    if (m > d) {
        return -1;
    }

    int mes = (d + m) / 2;
 
    // If the element is present at the middle
    // itself
    if (arr[mes] == x) {
        return mes - 1;
    }   
 
    // Nese elementi eshte me vogel se a[mes], kerkojme ne tabelen a[m, mes - 1]
    else if (arr[mes] > x) {
        return BinarySearch(arr, m, mes - 1, x);

    }
   
    // Ne te kundert kerkojme ne tabelen a[mes + 1, d]
    else {
        return BinarySearch(arr, mes + 1, d, x);

    }
 
}

int main() {
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;

    int n;
    cout << "Vendos permasen e tabeles" << endl;
    cin >> n;
    int array[n];

    srand(time(0));
    //loop per te gjeneruar numra per array
    for (int i = 0; i < n; i++) {
        array[i] = rand()%400000;
    }

    
    
    sort(array, array + n);

    //KOHA PER FUNKSIONIN
    
    auto start = high_resolution_clock::now();
    

    int x = BinarySearch(array, 0, n, 5);
    
    

    auto stop = high_resolution_clock::now();

    auto ms_int = duration_cast<nanoseconds> (stop - start);
    duration<double, std::nano> ms_double = stop - start;
    

    std::cout << ms_int.count() << "ms\n";
    std::cout << ms_double.count() << "ms\n";


    //rezultati i binarysearch
    if (x == -1) {
        cout << "vk";
    } else cout << x;

    return 0;

    
    
}