#include <iostream>
#include <stdio.h>
#include <algorithm>    
using namespace std;

void Swap (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Merge(int a[], int b[], int c[], int nb, int nc, int k){
    int p, pb, pc, ib, ic, kb, kc;
    p = pb = pc = 0;
    ib = ic = 0;
    while ((0<nb) && (0<nc)){
        kb = min(k,kb);
        kc = min(k,nc);
        if (b[pb+ib] <= c[pc+ic]){
            a[p++] = b[pb+ib];
            ib++;
            if (ib == kb){
                for (; ic<kc; ic++)
                    a[p++] = c[pc+ic];
                pb+=kb;
                pc+=kc;
                ib=ic=0;
                nb-=kb;
                nc-=kc;
            }
            else{
                a[p++]=c[pc+ic]; ic++;
                if ( ic==kc )
                { 
                    for (; ib<kb; ib++)
                        a[p++]=b[pb+ib];
                    pb+=kb; pc+=kc; ib=ic=0;
                    nb-=kb; nc-=kc; 
                }
            }
        }
    }
}

void MergeSort (int a[], int n){
    int b[100], c[100];
    int p,pb,pc; 
    int i,k=1;
    do { 
        p=pb=pc=0;
        while (p<n) { 
            for (i=0;(p<n)&&(i<k);i++)
                b[pb++]=a[p++];
            for (i=0;(p<n)&&(i<k);i++)
                c[pc++]=a[p++]; };
            Merge(a, b, c, pb,pc,k);
            k*=2;
        } while ( k<n );
}

int main (){
    int arr[] = {1, 12, 8, 5, 2, 99};
    int n = sizeof(arr) / sizeof (arr[0]);
    MergeSort(arr, n);
    printf ("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++)
    {
        printf ("%d ", arr[i]);
    }
    return 0;
}