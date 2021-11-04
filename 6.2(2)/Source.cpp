#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void create(int* a, const int n, const int l, const int h);
void fmax(int* a, int n, int& a_max, int i);
void fmin(int* a, int n, int& a_min, int i);
int sum(int a, int b);


int main() {
    srand((unsigned)time(NULL));

    const int n = 20;
    int a[n];

    int h = 30;
    int l = 10;
    int s;

    create(a, n, l, h);

    int max = a[0];

    int min = a[0];



    fmax(a, n, max, 0);
    fmin(a, n, min, 0);

    s = sum(max, min);

    for (int i = 0; i < n; i++) {
        cout << setw(3) << a[i] << " ";
    }
    cout << endl;

    cout << "max = " << setw(4) << max << endl
        << "min = " << setw(4) << min << endl
        << "sum = " << s;

    return 0;
}

void create(int* a, const int n, const int l, const int h)
{
    for (int i = 0; i < n; i++)
        a[i] = l + rand() % (h - l + 1);
}

void fmax(int* a, int n, int& a_max, int i) {
    if (a[i] > a_max) {
        a_max = a[i];
    }
    if (i + 1 < n) {
        fmax(a, n, a_max, i + 1);
    }
}


void fmin(int* a, int n, int& a_min, int i) {
    if (a[i] < a_min) {
        a_min = a[i];
    }
    if (i + 1 < n) {
        fmin(a, n, a_min, i + 1);
    }
}

int sum(int a, int b) {
    return a + b;
}
