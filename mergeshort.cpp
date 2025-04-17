#include <iostream>
using namespace std;

int arr[20], B[20];
int n;

void input()
{
    while (true)
    {
        cout << "masukkan jumlah data pada array :";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else 
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "==================" << endl;
    cout << "masukkan elemen array" << endl;
    cout << "==================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

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
        if(arr[i] <= arr[j]){
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;

        }
        k++;

    }
    while (j <= high)
    {
        B[k] = arr[j];
        j++;
        k++;
    }

    while (i <= mid)
    {
        B[k] = arr[i];
        i++;
        k++;

    }

    for(int x = low; x <= high; x++)
    {
        arr[x] = B[x];
    }

}

void output()
{
    cout << "\nData setelah di urutkan (merge Sort): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";

    }
    cout << endl;
}

int main()
{
    input();
    mergeSort(0, n - 1);
    output();
    return 0;
}