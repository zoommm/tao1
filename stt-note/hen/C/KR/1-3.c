#include <stdio.h>

int main(int argc, const char *argv[])
{
    float fahr, celsius;
    float lower, upper, step;
   
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("fahr   celsius\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32); 
        printf("%3.0f%6.0f\n",fahr, celsius);
        fahr += step;
    }
    return 0;
}
