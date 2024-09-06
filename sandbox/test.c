#include <stdio.h>



void beta(int *a) {
    (*a) = (*a) + 1;
}

int main() {


    int x = 5;
    printf("before=%d\n", x);
    beta(&x);
    printf("after=%d\n", x);



}
