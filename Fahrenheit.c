#include <stdio.h>

int main () {
       int upper = 300;
       int lower = 0;
       int step = 20;

       float fahr;
       float celsius;

       fahr = lower;
       while (fahr <= upper){
               celsius = (fahr-32.0) * (5.0/9.0);
               printf("%6.2f\t%6.2f\n", fahr, celsius);
               fahr = fahr + step;
       }

}
