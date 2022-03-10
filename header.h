#define ADD_H
using namespace std;
int intturner(double x);
int intturner2(double x);
int signchange(double *x);
int signchange2(double &x);

struct Matrix
{
    double a[3][3] = {{1, 2, 3}, {4, 5 , 6}, {7, 8 , 9}};
};
int matrix2(Matrix &matr, int x);
int matrix(Matrix *matr, int *x);
struct circle {
    double x;
    double y;
};
void move(circle& a, double & x, double & y);
void move2(circle* a, double * x, double * y);