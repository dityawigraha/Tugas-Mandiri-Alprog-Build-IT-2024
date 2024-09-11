#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int nilaiRama;

    scanf("%d", &nilaiRama);

    int nilai[nilaiRama];

    for(int i = 0; i < nilaiRama; i++) {
        scanf("%d", &nilai[i]);

    }
    
    qsort(nilai, nilaiRama, sizeof(int), compare);

    for(int i = 0; i < nilaiRama; i++) {
        printf("%d\n", nilai[i]);
    }

    return 0;
}