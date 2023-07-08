#include <iostream>
#include <stdio.h>
using namespace std;

void Swap (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void QuickSort (int arr[], int left, int right){
    int x;
    if (left >= right) return;
    x = arr[(right+left)/2];
    int i = left;
    int j = right;
    do{
        while (arr[i] < x) i++;
        while (arr[j] > x) j--;
        if (i <= j)
        {
            Swap(arr[i], arr[j]);
            i++;
            j--;
        }
    } while (i < j);
    if (left < j) QuickSort(arr,left, j);
    if (i < right) QuickSort(arr,i,right);
}

int main (){
    int arr[] = {1, 12, 8, 5, 2, 99};
    int n = sizeof(arr) / sizeof (arr[0]);
    int left = 0, right = n -1;
    QuickSort(arr, left, right);
    printf ("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++)
    {
        printf ("%d ", arr[i]);
    }
    return 0;
}