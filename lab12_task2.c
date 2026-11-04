#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int rand10(int mmax) {
    int m = 1 + rand() % mmax;
    return m;
}
double rand_double(double dmin, double dmax) {
    float m = dmin + 1.f* (dmax - dmin) *rand() / RAND_MAX;
    return m; 
}
int main()
{

}