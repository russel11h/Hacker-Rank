#include<iostream>
using namespace std;

int main() {
    int a[5] = {1, 3, 4, 5, 2};
    int v, j;


    for (int i = 1; i < 5; i++) {
        v = a[i];
        j = i - 1;


        while (j >= 0 && a[j] > v) {
            a[j + 1] = a[j];
            j--;

        }

        a[j + 1] = v;
    }
    cout<<endl;


    for (int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }

    return 0;
}

