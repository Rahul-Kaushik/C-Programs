#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr=0,20,...300*/

int main()
{
    int fahr, Celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr<=upper){
        Celsius= 5 * (fahr-32) / 9;
        printf("%3d\t%6d\n",fahr, Celsius);

        fahr=fahr+step;
    }

}

/*The body of while can be one or more statements enclosed in braces or a single statement without braces*/
/*Always indent the statements inside while using a tab or 4 space*/
/*printf is a general purpose output formatting function*/
/*printf is not part of c language.It is a function from std librarry that are accesible to c programs*/