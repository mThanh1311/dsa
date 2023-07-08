#include <iostream>
#include <stdio.h>
#include <algorithm>    
using namespace std;

void Swap (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void HeapSort(){
    
}


int main (){
    int arr[] = {1, 12, 8, 5, 2, 99};
    int n = sizeof(arr) / sizeof (arr[0]);
    HeapSort(arr, n);
    printf ("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++)
    {
        printf ("%d ", arr[i]);
    }
    return 0;
}