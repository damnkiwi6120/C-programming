#include <stdio.h>

int main(void){
    const float pi = 3.141592654f;
    float r = 10.0f;
    float volume = 4.0f / 3.0f * pi * r * r * r;
    printf("Radius: %.2f\n", r);
    printf("Volume: %.2f\n", volume);
    return 0;
}
