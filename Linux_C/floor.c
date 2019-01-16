#include <math.h>
#include <stdio.h>
int main(void)
{
    float a = ceil(59 / 60);
    float b = floor(59 / 60);
    float c = ceil(-59 / 60);
    float d = floor(-59 / 60);

    printf("%f, %f, %f, %f", a, b, c, d);
}
