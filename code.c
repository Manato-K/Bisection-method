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
    printf("%2d : %.10lf(%.10lf)\n",n,d,fd);
    if(fabs(fd)<er) break;
    } while(fabs(a-b-c)>er);
}
/*
1 : 442.0000000000(195362.0000000000)
 2 : 535.0000000000(286223.0000000000)
 3 : 581.5000000000(338140.2500000000)
 4 : 604.7500000000(365720.5625000000)
 5 : 616.3750000000(379916.1406250000)
 6 : 622.1875000000(387115.2851562500)
 7 : 625.0937500000(390740.1962890625)
 8 : 626.5468750000(392558.9865722656)
 9 : 627.2734375000(393469.9653930664)
10 : 627.6367187500(393925.8507232666)
11 : 627.8183593750(394153.8923683167)
12 : 627.9091796875(394267.9379358292)
13 : 627.9545898438(394324.9669058323)
14 : 627.9772949219(394353.4829373956)
15 : 627.9886474609(394367.7413398176)
16 : 627.9943237305(394374.8706376888)
17 : 627.9971618652(394378.4353107894)
18 : 627.9985809326(394380.2176533809)
19 : 627.9992904663(394381.1088261870)
20 : 627.9996452332(394381.5544129676)
21 : 627.9998226166(394381.7772064524)
22 : 627.9999113083(394381.8886032183)
23 : 627.9999556541(394381.9443016072)
24 : 627.9999778271(394381.9721508031)
25 : 627.9999889135(394381.9860754014)
26 : 627.9999944568(394381.9930377007)
27 : 627.9999972284(394381.9965188503)
28 : 627.9999986142(394381.9982594252)
29 : 627.9999993071(394381.9991297126)
30 : 627.9999996535(394381.9995648563)
31 : 627.9999998268(394381.9997824281)
32 : 627.9999999134(394381.9998912141)
33 : 627.9999999567(394381.9999456070)
34 : 627.9999999783(394381.9999728035)
35 : 627.9999999892(394381.9999864018)
36 : 627.9999999946(394381.9999932009)
37 : 627.9999999973(394381.9999966004)
38 : 627.9999999986(394381.9999983002)
39 : 627.9999999993(394381.9999991501)
*/