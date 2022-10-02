#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int asd;
    double x,y,sonuc,pi;
    pi=3.14159265358979323846;
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n-------------------------------------------------");
    printf("Lutfen asagidaki işlemlerden yapmayı istediğinizin numarasını yazınız.");
    printf("-------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n1-Cosinus alma\n2-Sinus alma\n3-Tanjant alma\n4-Cotanjant alma\n5-Toplama\n6-Carpma\n7-Bolme\n8-Cikartma\n9-Karekok alma\n10-Yuzde hesabi\n");
    scanf("%d",&asd);
    switch (asd){
        case 1:
        printf("Lutfen cosinusunu almak istediginiz derece degerini giriniz:");
        scanf("%lf",&x);
        x=x*pi/180;
        sonuc=cos(x);
        printf("%f",sonuc);
        return 0;
        case 2:
        printf("Lutfen sinusunu almak istediginiz derece degerini giriniz:");
        scanf("%lf",&x);
        x=x*pi/180;
        sonuc=sin(x);
        printf("%lf",sonuc);
        return 0;
        case 3:
        printf("Lutfen tanjantini almak istediginiz derece degerini giriniz:");
        scanf("%lf",&x);
        x=x*pi/180;
        sonuc=sin(x)/cos(x);
        printf("%lf",sonuc);
        return 0;
        case 4:
        printf("Lutfen cotanjantini almak istediginiz derece degerini giriniz:");
        scanf("%lf",&x);
        x=x*pi/180;
        sonuc=cos(x)/sin(x);
        printf("%lf",sonuc);
        return 0;
        case 5:
        printf("Lutfen toplamak istediginiz sayilardan birini giriniz:");
        scanf("%lf",&x);
        printf("Lutfen toplamak istediginiz sayilardan digerini giriniz:");
        scanf("%lf",&y);
        printf("%lf",x+y);
        return 0;
        case 6:
        printf("Lutfen carpmak istediginiz sayilardan birini giriniz:");
        scanf("%lf",&x);
        printf("Lutfen carpmak istediginiz sayilardan digerini giriniz:");
        scanf("%lf",&y);
        printf("%lf",x*y);
        return 0;
        case 7:
        printf("Lutfen bolmek istediginiz sayilardan birini giriniz:");
        scanf("%lf",&x);
        printf("Lutfen bolmek istediginiz sayilardan digerini giriniz:");
        scanf("%lf",&y);
        printf("%lf",x/y);
        return 0;
        case 8:
        printf("Lutfen cikartmak istediginiz sayilardan birini giriniz:");
        scanf("%lf",&x);
        printf("Lutfen cikartmak istediginiz sayilardan digerini giriniz:");
        scanf("%lf",&y);
        printf("%lf",x-y);
        return 0;
        case 9:
        printf("Lutfen cikartmak istediginiz sayiyi:");
        scanf("%lf",&x);
        sonuc=sqrt(x);
        printf("%lf",sonuc);
        return 0;
        case 10:
        printf("Lutfen hangi sayinin yuzdesini almak istediginizi giriniz:");
        scanf("%lf",&x);
        printf("Lutfen %lf sayisinin yuzde kacini almak istediginizi giriniz:",x);
        scanf("%lf",&y);
        sonuc=(x/100)*y;
        printf("%lf",sonuc);
        return 0;
    }
    return 0;
}