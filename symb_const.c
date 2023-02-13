#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

main(){
    int fahr;
    for (fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP)
    printf("%3.0d %6.1d",fahr,(5.0/9.0)*(fahr-32));
}
/*LOWER,UPPER and STEP are symbolic constants not variables so they dont appear in declarations*/
/* Symbolic constants are written in caps to distinguish from the genric variables*/
/* there are no semicolon at the end of a #define line*/