#include <stdio.h>
#define SENTINEL 0


int main() {

    int first, second, n; // first = 5, second = 10
    printf("Enter two nums: "); scanf("%d%d", &first, &second);

    if (first < second) {  // 5 < 10
        first += second;   // first = 15
        second = first - second; // second = 5
    }

    for(scanf("%d", &n); n != SENTINEL; scanf("%d", &n)) {
        if (n > first) { // 12 > 10
            second = first; // second = 10
            first = n; // first = 12
        } else if (n > second && n != first) { // 12 > 10 && 12 != 12
            second = n; // second = 10
        }
    }


    return 0;
}