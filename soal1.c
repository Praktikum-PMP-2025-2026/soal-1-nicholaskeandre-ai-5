/*
EL 2008 Praktikum Pemecahan Masalah dengan Pemrograman
Modul : Foundation of Algorithm
Pembuat : Nicholas Keandre (13224035)
Deskripsi : Program untuk menentukan degree tiap baris adjacency matrix
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int mat[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int degree[N];
    for (int i = 0; i < N; i++) {
        degree[i] = 0;
        for (int j = 0; j < N; j++) {
            if (mat[i][j] == 1) {
                degree[i]++;
            }
        }
        printf("DEGREE %d %d\n", i, degree[i]);
    }

    int max = 0;
    int idx = 0;
    for (int i = 0; i < N; i++) {
        if (max < degree[i]) {
            max = degree[i];
            idx = i;
        }
    }
    printf("MAX_VERTEX %d\n", idx);

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (degree[i] == 0) {
            printf("ISOLATED %d\n", i);
            count++;
        }
    }
    if (count == 0) {
        printf("ISOLATED NONE\n");
    }

    return 0;
}
