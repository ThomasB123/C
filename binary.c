#include <stdio.h>

// Search value 'x' in array a [0], a [1], ..., a [n - 1]
int search (int a [], int n, int x) {
    int r, c;
    for (int l = 0, r = n - 1; l <= r;) {
        c = l + (r - l) / 2;
        if (a [c] > x) r = c - 1;
        else if (a [c] < x) l = c + 1;
        else return c;
    }
    return -1;
}