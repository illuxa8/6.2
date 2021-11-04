#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void create(int* a, const int n, const int l, const int h);
void max(int* a, int n, int& a_max);
void min(int* a, int n, int& a_min);
int sum(int a, int b);


int main() {
    srand((unsigned)time(NULL));

    const int n = 20;
    int a[n];

    int h = 30;
    int l = 10;
    int s;

    create(a, n, l, h);

    int a_max = a[0];
    int i_max = 0;

    int a_min = a[0];
    int i_min = 0;



    max(a, n, a_max);
    min(a, n, a_min);

    s = sum(a_max, a_min);

    for (int i = 0; i < n; i++) {
        cout << setw(3) << a[i] << " ";
    }
    cout << endl;
    cout << "max = " << a_max << endl;
    cout << "min = " << a_min << endl;

    cout << "sum = " << s;

    return 0;
}

void create(int* a, const int n, const int l, const int h)
{
    for (int i = 0; i < n; i++)
        a[i] = l + rand() % (h - l + 1);
}

void max(int* a, int n, int& a_max) {
    for (int i = 0; i < n; i++) {
        if (a[i] > a_max) {
            a_max = a[i];
        }
    }
}

void min(int* a, int n, int& a_min) {
    for (int i = 0; i < n; i++) {
        if (a[i] < a_min) {
            a_min = a[i];
        }
    }
}

int sum(int a, int b) {
    return a + b;
}
