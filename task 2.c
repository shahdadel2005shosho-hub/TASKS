#include <stdio.h>

int toggleBit(int num, int Position) {
    return num ^ (1 << Position);
}

int main() {
    int num = 10;     
    int Pos = 1;     

    int result = toggleBit(num, Pos);
    printf("Before toggling: %d\n", num);
    printf("After toggling bit %d: %d\n", Pos, result);

    return 0;
}