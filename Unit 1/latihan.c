#include <stdio.h>

int main(){
    int s1, t1;
    int v1, t2;
    int s2, v2; 

    scanf("%d", &s1);
    scanf("%d", &t1);
    scanf("%d", &v1);
    scanf("%d", &t2);
    scanf("%d", &s2);
    scanf("%d", &v2);

    float kecepatan = (float) s1/t1;
    float jarak = (float) v1*t2;
    float waktu = (float) s2/v2;

    printf("%.2f\n", kecepatan);
    printf("%.2f\n", jarak);
    printf("%.2f\n", waktu);
}