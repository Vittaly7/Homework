#include <stdio.h>
#define Byte_Bit 8

int main(void)
{
    float dsps = 0.0f;                  //download speed per second
    float fsm = 0.0f;                   //file size in megabytes
    printf("Input download speed per second and file size in megabytes: ");
    scanf("%f %f", &dsps, &fsm);
    float time = fsm * Byte_Bit/ dsps;
    printf("At the download speed of %.2f MB/s, it will take %.2f seconds todowload a file of size %.2f MB\n", dsps, time, fsm);
    return 0;
}