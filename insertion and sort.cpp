#include<iostream>
using namespace std;

int main() {
    int a[5] = {1, 3, 5, 2, 4};

    int v;

    for (int i = 1; i < 5; i++) {
        v = a[i];
        int j;

        for (j = i - 1; j >= 0; j--) {
            if (v > a[j]) {
                a[j + 1] = a[j];

            } else {
                break;
            }
        }
        a[j + 1] = v;

    }
    cout<<endl;

    for (int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
