//
//  ps1-3.cpp
//  PS01-soojinl2
//
//  Created by Soojin Rachell Lee on 8/28/24.
//

#include <stdio.h>
#include <iostream>

int main(void){
    double x,y;
    double a,b,c,d,e,f;
    double absval;
    
    printf("ax+by=c\n");
    printf("dx+ey=f\n");
    printf("Enter a b c d e f:");
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
    absval = a*e-b*d;
    
    if (absval<0.000001){
        printf("No solution.");
    }
    else{
        x = (e*c - b*f)/(a*e - b*d);
        y = (a*f - c*d)/(a*e - b*d);
        printf("x=%lf y=%lf",x,y);
    }
    return 0;
}
