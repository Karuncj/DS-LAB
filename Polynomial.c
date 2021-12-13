/*******************************************
*File          :Polynimial.c
*Description   :Polynomial representation
*Author        :KARUN CHERY JAMES
*Date          :13/12/21
*******************************************/
#include<stdio.h>
int main(){
int max,array[5],i,expo[5];
printf("\nEnter the highest power of x:");
scanf("%d",&max);

//Entering the coefficient
for(i=0;i<=max;i++){
printf("\nEnter the exponent:");
scanf("%d",&expo[i]);
printf("\nEnter the coefficient of x^%d\n",expo[i]);
scanf("%d",&array[i]);
}

//Printing the polynomial
printf("The polynomial is :\n");
for(i=0;i<=max;i++){
printf("%d(x^%d)",array[i],expo[i]);
if(i!=max)
printf("+");
}
}