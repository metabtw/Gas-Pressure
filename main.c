#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* kapali kaptaki gaz basincini hesaplayan program */

    //basinc=(mol sayisi*R sabiti*sicaklik)/hacim

    float basinc,rsabiti;
    int sicaklik,hacim,mol;
    rsabiti=0.82;


    printf("Mol sayisi giriniz:");
    scanf("%d",&mol);
    printf("sicaklik giriniz:");
    scanf("%d",&sicaklik);
    printf("hacim giriniz:");
    scanf("%d",&hacim);
    basinc=mol*rsabiti*sicaklik/hacim;
    printf("kaptaki gazin basinci=%f",basinc);
    printf("\n\n");

    return 0;
}
