#include<stdio.h>

float main(){
float fahr, celsius;
int lower, upper, step;

lower=0;
upper=100;
step=20;

fahr=lower;
while(fahr<=upper){
    celsius=(5.0/9.0)*(fahr-32.0);
    printf("%3.0f %6.1f\n",fahr,celsius);
    fahr=fahr+step;
}

}
/*%3.0f says that a floating point number is to be printed atleast three characters wide with no deciml points and no fraction digits*/
/*%6.1f describes to print the float value with 6characters wide with 1 digit after the decimal point*/