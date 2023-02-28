#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int arr_size;

    int array1[] = {1, 2, 3, 4, 5};
    arr_size = sizeof(array1)/sizeof(array1[0]);
    cout << test(array1, arr_size);









int test(int array[], int arr_size) {

    for (int i = 0; i = arr_size - 1; ++i) {
        if(array[i]==1 and array[i + 1]==2 and array[i + 2]==3) {
            return 1;
        } else{
            return 0;
        }

        

        }
    }
}