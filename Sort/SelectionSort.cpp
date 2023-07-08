#include <iostream>
#include <stdio.h>
using namespace std;

void Swap (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void SelectionSort(int arr[], int n){
    int min ;
    for (int i = 0; i < n; i++){
        min = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min])
                min = j;    //Ghi nhan vi tri phan tu nho nhat
        }
        if (min != i)
            Swap(arr[min], arr[i]);
    }
}

int main (){
    int arr[] = {1, 12, 8, 5, 2, 6, 4, 15};
    int n = sizeof(arr) / sizeof (arr[0]);
    SelectionSort(arr, n);
    printf ("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++)
    {
        printf ("%d ", arr[i]);
    }
    return 0;
}