#include <iostream>
#include <stdio.h>
using namespace std;

void Swap (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void InsertionSort(int arr[], int n){
    int pos, x;
    for (int i = 1; i < n; i++){
        x = arr[i];
        pos = i-1;
        while ((pos >= 0) && (arr[pos] > x)){
            arr[pos+1] = arr[pos];
            pos--;
        }
        arr[pos+1] = x;
    }
}

int main (){
    int arr[] = {1, 12, 8, 5};
    int n = sizeof(arr) / sizeof (arr[0]);
    InsertionSort(arr, n);
    printf ("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++)
    {
        printf ("%d ", arr[i]);
    }
    return 0;
}