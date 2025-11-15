#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(){
float x;
float y;
float V;
float mini;
int i;
for(x=0; x<=1;x=x+0.6){
    for(y=1;y<=2;y=y+0.7){
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
        printf("V=%f ", V,"  ");
        }
    }
    return 0;
}