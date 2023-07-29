#include <iostream>

using namespace std;

int partition(int a[], int p, int r) {

    int x = a[r];
    int i = p - 1;

    for (int j = p; j < r; j++) {
        if (a[j] < x) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

void QuickSort(int a[], int p, int r) {

    if (p < r) {
        int q = partition(a, p, r);
        QuickSort(a, p, q - 1);
        QuickSort(a, q + 1, r);
    }
}

int main()
{
    int liste[] = { 2,1,8,5,4,7,0,3 };
    QuickSort(liste, 0, 7);

    for (int i = 0; i < 8; i++) {
        cout << liste[i] << ", ";
    }
}
