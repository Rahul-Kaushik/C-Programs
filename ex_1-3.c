#include<stdio.h>

float main(){
float fahr, celsius;
int lower, upper, step;

lower = 0;
upper= 100;
step=20;

fahr=lower;
printf("%s%s\n","Fahr ","Celsius");
while(fahr<upper){
    
    celsius= (5.0/9.0)*(fahr-32.0);
    printf("%3.0f%6.1f\n",fahr,celsius);
    fahr=fahr+step;
}
}
