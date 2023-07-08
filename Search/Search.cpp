#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

//Tim kiem tuyen tinh
int LinearSearch(int arr[], int n, int x){
    int i = 0;
    while ((i < n) && (arr[i] != x)){
        i++;
    }
    if (i < n) 
        return i;
    return -1;
}

//Tim kiem tuyen tinh voi ki thuat dat linh canh
int LinearSearchUpdate(int arr[], int n, int x){
    int i = 0;
    arr[n] = x; //Dat linh canh vao cuoi
    while (arr[i] != x){
        i++;
    }
    if (i<n)
        return i;
    return -1;
}

//Tim kiem nhi phan
int BinarySearch (int arr[], int n, int x){
    int left = 0, right = n - 1, mid;
    while (left <= right){
        mid = 1 + (right-left)/2 ;
        if (x == arr[mid]) 
            return mid; 
        else if (x < arr[mid])
            right = mid - 1;
        else 
            left = mid + 1;
    }
    return -1;
}

int main(){
    int arr[] = {2,5,8,10,12,13,15,18,21,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    printf ("Vi tri cua x can tim la: %d",BinarySearch(arr,n,x));
    return 0;
}