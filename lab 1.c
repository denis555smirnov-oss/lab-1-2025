#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <limits.h>
#include <float.h>
main(){
float x;
float y;
float V;
float mini;
int i;
for(x=0; x<=1;x=x+0.1){
    for(y=1;y<=2;y=y+0.1){
        if (cos(x/y)/sin(x/y)<=cbrt(x+y)){
            mini=cos(x/y)/sin(x/y);
            }
        else{
            mini=cbrt(x+y);
            }
        if (mini>=(x*x+y*y)){
            mini=x*x+y*y;
            }
        V=mini;
        i=i+1;
        if (i<=5){
            printf("V=%f ", V,"  ");
        }
        else{
            i=0;
            printf("\nV= ",V,"  ");
        }
        }
    }

}