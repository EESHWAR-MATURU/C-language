#include <stdio.h>
#include<math.h>
int main()
{
 
        int p,t;
 
        float r,si,amount,ci;
 
        printf("Please enter principal,time and rate of interest");
 
        scanf("%d%d%f",&p,&t,&r);
 
        si=p*t*r/100;
 

 
        printf("Simple interest = %.3f",si);
 

 
        amount=p*pow((1 +r/100),t);
 
        ci=amount-p;
 
        printf("Compound interest = %.3f",ci);
        return 0;
}
 
