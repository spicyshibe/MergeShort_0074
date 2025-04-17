#include <iostream>
using namespace std;

int arr[20], B[20];
int n;



void mergeSort(int low, int high)
{
    if (low >= high)
    {  //step 1
        return; //step 1a 
    }

    int mid = (low + high) / 2;

    mergeSort(low, mid);
    mergeSort(mid + 1, high);

    int i = low;
    int j,k;
    j = mid  + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        
    }

}