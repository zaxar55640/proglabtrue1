#include "header.h"
int intturner(double x) {
    double *y = &x;
    *y = (int) x;
}
int intturner2(double x) {
    double &y = x;
    y = (int) x;
}
int signchange(double *x){
    *x = -(*x);
}
int signchange2(double &x){
    x = -x;
}
int matrix(Matrix *matr, int *x) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matr->a[i][j] = matr->a[i][j] * *x;
        }
    }
}
int matrix2(Matrix & matr, int x) {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            matr.a[i][j] = matr.a[i][j] * x;
}
void move(circle& a, double& x, double& y) {
    a.x += x;
    a.y += y;
}
void move2(circle* a, double* x, double* y) {
    a->x += *x;
    a->y += *y;
}
