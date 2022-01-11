/*Bisection mrthod*/
#include <stdio.h>
#include <math.h>

double f(double x)
{
    return(x*x-2.0);
}
int main(void){
    int n=0;
    double a,b,c,d,fa,fc,fd,er=1.0e-9;
    a=256.0;
    b=320.0;
    c=308.0;
    d=147.0;
    do {
        fa=f(a);
        d=(a+b+c)/2.0;
        fd=f(d);
        if(fa*fd<0.0) {
            b=d;
        } else {
            a=d;
        }
    n++;
    printf("%2d : %.10lf(%.10lf)\n",n,c,fc);
    if(fabs(fc)<er) break;
    } while(fabs(a-b)>er);
}