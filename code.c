/*Bisection mrthod*/
#include <stdio.h>
#include <math.h>

double f(double x)
{
    return(pow(x,3) * a - pow(x,2) * b - pow(x,1) * c + d);
}
int main(void){
    int n=0;
    double a,b,c,d,fa,fc,er=1.0e-9;
    a=256.0;
    b=320.0;
    c=308.0;
    d=147.0;
    do {
        fa=f(a);
        c=(a+b)/2.0;
        fc=f(c);
        if(fa*fc<0.0) {
            b=c;
        } else {
            a=c;
        }
    n++;
    printf("%2d : %.10lf(%.10lf)\n",n,c,fc);
    if(fabs(fc)<er) break;
    } while(fabs(a-b)>er);
}