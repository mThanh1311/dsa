#include <iostream>
#include <stdio.h>
using namespace std;

void Swap (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void InterchangeSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[i])
                Swap(arr[j], arr[i]);
        }
    }
}

int main (){
    int arr[] = {1, 12, 8, 5, 2, 6, 4, 15};
    int n = sizeof(arr) / sizeof (arr[0]);
    InterchangeSort(arr, n);
    printf ("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++)
    {
        printf ("%d ", arr[i]);
    }
    return 0;
}