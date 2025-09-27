#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int awal, akhir;
    scanf("%d %d", &awal, &akhir);

    int n = akhir - awal + 1; 
    int jumlah = n * (awal + akhir) / 2;

    printf("%d\n", jumlah);

    return 0;
}
