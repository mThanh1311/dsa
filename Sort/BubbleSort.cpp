#include <iostream>
#include <stdio.h>
using namespace std;

void Swap (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void BubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = n-1; j>i; j--){
            if (arr[j] < arr[j-1])
                Swap(arr[j], arr[j-1]);
        }
    }
}

int main (){
    int arr[] = {1, 12, 8, 5, 2, 99};
    int n = sizeof(arr) / sizeof (arr[0]);
    BubbleSort(arr, n);
    printf ("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++)
    {
        printf ("%d ", arr[i]);
    }
    return 0;
}