#include <stdio.h>

int main(void) {
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, rowsum1, rowsum2, rowsum3, rowsum4, colsum1, colsum2, colsum3, colsum4, diagsum1, diagsum2;
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);

    printf("\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);

    rowsum1 = a + b + c + d;
    rowsum2 = e + f + g + h;
    rowsum3 = i + j + k + l;
    rowsum4 = m + n + o + p;

    colsum1 = a + e + i + m;
    colsum2 = b + f + j + n;
    colsum3 = c + g + k + o;
    colsum4 = d + h + l + p;

    diagsum1 = a + f + k + p;
    diagsum2 = d + g + j + m;

    printf("Row sums: %d %d %d %d\n", rowsum1, rowsum2, rowsum3, rowsum4);
    printf("Column sums: %d %d %d %d\n", colsum1, colsum2, colsum3, colsum4);
    printf("Diagonal sums: %d %d\n\n", diagsum1, diagsum2);
}

