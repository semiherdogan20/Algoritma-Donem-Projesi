#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
void serbestDusmeDeneyi(double *gPtr, char **gezegenIsimleri, int gezegenSayisi,char isim[]) {
    double t;
    double h;
    int i;

    printf("dusme suresini saniye cinsinden gir: ");
    scanf("%lf", &t);

    t = (t < 0) ? -t : t;

    for (i = 0; i < gezegenSayisi; i++) {
        double g = *(gPtr + i);
        h = 0.5 * g * t * t;
        printf("%s: ",isim);
        printf("%s, %f \n", *(gezegenIsimleri + i), h);
    }
    printf("****************************************");
}
void yukariAtisDeneyi(double *gPtr, char **gezegenIsimleri, int gezegenSayisi,char isim[]) {
    double v0;
    double hMax;

    printf("ilk hizi gir: ");
    scanf("%lf", &v0);

    v0 = (v0 < 0) ? -v0 : v0;

    for (int i = 0; i < gezegenSayisi; i++) {
        double g = *(gPtr + i);
        hMax = (v0 * v0) / (2.0 * g);
        printf("%s: ",isim);
        printf("%s %.4f m\n", *(gezegenIsimleri + i), hMax);
    }
    printf("****************************************");
}

void agirlikDeneyi(double *gPtr, char **gezegenIsimleri, int gezegenSayisi,char isim[]) {
    double kutle;
    double agirlik;

    printf("cismin kutlesini kg cinsinden gir ");
    scanf("%lf", &kutle);

    kutle = (kutle < 0) ? -kutle : kutle;

    for (int i = 0; i < gezegenSayisi; i++) {
        double g = *(gPtr + i);
        agirlik = kutle * g;
        printf("%s: ",isim);
        printf("%s  %f \n", *(gezegenIsimleri + i), agirlik);
    }
    printf("****************************************");
}

void potansiyelEnerjiDeneyi(double *gPtr, char **gezegenIsimleri, int gezegenSayisi,char isim[]) {
    double kutle;
    double h;
    double potEnerji;

    printf("cismin kutlesini kg cinsinden gir");
    scanf("%lf", &kutle);
    kutle = (kutle < 0) ? -kutle : kutle;
    printf("yerden yuksekligi metre cinsinden gir ");
    scanf("%lf", &h);

    h = (h < 0) ? -h : h;


    for (int i = 0; i < gezegenSayisi; i++) {
        double g = *(gPtr + i);
        potEnerji = kutle * g * h;
        printf("%s: ",isim);
        printf("%s %f \n", *(gezegenIsimleri + i), potEnerji);
    }
    printf("****************************************");
}

void hidrostatikBasincDeneyi(double *gPtr, char **gezegenIsimleri, int gezegenSayisi,char isim[]) {
    double siviYogunlugu;
    double derinlik;
    double basinc;

    printf("sivinin yogunlugunu kg/m^3 cinsinden gir: ");
    scanf("%lf", &siviYogunlugu);
    siviYogunlugu = (siviYogunlugu < 0) ? -siviYogunlugu : siviYogunlugu;

    printf("sivinin derinliginin ne kadar oldugunu gir metre cinsinden ");
    scanf("%lf", &derinlik);
    derinlik = (derinlik < 0) ? -derinlik : derinlik;

    for (int i = 0; i < gezegenSayisi; i++) {
        double g = *(gPtr + i);

        basinc = siviYogunlugu * g * derinlik;
        printf("%s: ",isim);
        printf("%s %f\n", *(gezegenIsimleri + i), basinc);
    }
    printf("****************************************");
}


void arsimetKaldirmaKuvvetiDeneyi(double *gPtr, char **gezegenIsimleri, int gezegenSayisi,char isim[]) {
    double siviYogunlugu;
    double batanHacim;
    double kaldirmaKuvveti;


    printf("sivinin yogunlugunu kg/m^3 cinsinden gir: ");
    scanf("%lf", &siviYogunlugu);
    siviYogunlugu = (siviYogunlugu < 0) ? -siviYogunlugu : siviYogunlugu;

    printf("batan hacim miktarini m^3 cinsinden gir: ");
    scanf("%lf", &batanHacim);
    batanHacim = (batanHacim < 0) ? -batanHacim : batanHacim;


    for (int i = 0; i < gezegenSayisi; i++) {
        double g = *(gPtr + i);
        kaldirmaKuvveti = siviYogunlugu * g * batanHacim;
        printf("%s: ",isim);
        printf("%s  %f \n", *(gezegenIsimleri + i), kaldirmaKuvveti);
    }
    printf("****************************************");
}

void basitSarkacDeneyi(double *gPtr, char **gezegenIsimleri, int gezegenSayisi,char isim[]) {
    double ipUzunlugu;
    double periyot;

    printf("ip uzunlugunu metre cinsinden gir: ");
    scanf("%lf", &ipUzunlugu);
    ipUzunlugu = (ipUzunlugu < 0) ? -ipUzunlugu : ipUzunlugu;

    for (int i = 0; i < gezegenSayisi; i++) {
        double g = *(gPtr + i);
        periyot = 2 * PI * sqrt(ipUzunlugu / g);
        printf("%s: ",isim);
        printf("%s  %f \n", *(gezegenIsimleri + i), periyot);
    }
    printf("****************************************");
}

void sabitIpGerilmesiDeneyi(double *gPtr, char **gezegenIsimleri, int gezegenSayisi,char isim[]) {
    double kutle;
    double gerilme;


    printf("ipteki cismin kutlesini kg cinsinden gir:  ");
    scanf("%lf", &kutle);
    kutle = (kutle < 0) ? -kutle : kutle;

    for (int i = 0; i < gezegenSayisi; i++) {
        double g = *(gPtr + i);
        gerilme = kutle * g;
        printf("%s: ",isim);
        printf("%s , %f \n", *(gezegenIsimleri + i), gerilme);
    }
    printf("****************************************");

}

void asansorDeneyi(double *gPtr, char **gezegenIsimleri, int gezegenSayisi,char isim[]) {
    double kutle;
    double ivme;
    double yeniKuvvet;
    int yon;

    printf("asansordeki cismin kutlesini kg cinsinden gir  ");
    scanf("%lf", &kutle);
    kutle = (kutle < 0) ? -kutle : kutle;

    printf("asansorun ivmesini m/s^2 cinsinden gir:  ");
    scanf("%lf", &ivme);
    ivme = (ivme < 0) ? -ivme : ivme;

    printf("Asansorun hareket yonunu sec\n");
    printf("1: yukari yonlu hizlanma veya yavaslama, 2: asagi yonlu hizlanma veya yavaslama");
    scanf("%d", &yon);

    for (int i = 0; i < gezegenSayisi; i++) {
        double g = *(gPtr + i);

        if (yon == 1)
            yeniKuvvet = kutle * (g + ivme);
        else if(yon ==2)
            yeniKuvvet = kutle * (g - ivme);

        printf("%s  %f \n", *(gezegenIsimleri + i), yeniKuvvet);
    }
    printf("****************************************");
}

int main()
{
    char *gezegenIsimleri[] = {
        "Merkur", "Venus", "Dunya", "Mars",
        "Jupiter", "Saturn", "Uranus", "Neptun"
    };
    double gezegenDegerleri[] = {
        3.7,  // merkur
        8.9,  // venus
        9.8,  // dunya
        3.7,  // mars
        24.7, // jupiter
        10.4, // saturn
        8.7,  // uranus
        11.2  // neptun
    };
    int gezegenSayisi = 8;

    char isim[30];

    printf("Isim gir: ");
    scanf("%s", isim);

    int secim;
    while(1){

        printf("Deneyler:\n\
        1. Serbest Dusme Deneyi\n\
        2. Yukari Atis Deneyi\n\
        3. Agirlik Deneyi\n\
        4. Kutlecekimsel Potansiyel Enerji Deneyi\n\
        5. Hidrostatik Basinç Deneyi\n\
        6. Arsimet Kaldirma Kuvveti Deneyi\n\
        7. Basit Sarkac Periyodu Deneyi\n\
        8. Sabit Ip Gerilmesi Deneyi\n\
        9. Asansor Deneyi\n");

        printf("Yapmak istediginiz deneyi secin (1-9), cikmak icin -1'e basin");
        scanf("%d",&secim);

        if (secim == -1) {
            printf("Programdan cikiliyor. Name: %s\n", isim);
            break;
        }
        switch(secim) {
            case 1:
                serbestDusmeDeneyi(gezegenDegerleri, gezegenIsimleri, gezegenSayisi,isim);
                break;
            case 2:
                yukariAtisDeneyi(gezegenDegerleri, gezegenIsimleri, gezegenSayisi,isim);
                break;
            case 3:
                agirlikDeneyi(gezegenDegerleri, gezegenIsimleri, gezegenSayisi,isim);
                break;
            case 4:
                potansiyelEnerjiDeneyi(gezegenDegerleri, gezegenIsimleri, gezegenSayisi,isim);
                break;
            case 5:
                hidrostatikBasincDeneyi(gezegenDegerleri, gezegenIsimleri, gezegenSayisi,isim);
                break;
            case 6:
                arsimetKaldirmaKuvvetiDeneyi(gezegenDegerleri, gezegenIsimleri, gezegenSayisi,isim);
                break;
            case 7:
                basitSarkacDeneyi(gezegenDegerleri, gezegenIsimleri, gezegenSayisi,isim);
                break;
            case 8:
                sabitIpGerilmesiDeneyi(gezegenDegerleri, gezegenIsimleri, gezegenSayisi,isim);
                break;
            case 9:
                asansorDeneyi(gezegenDegerleri, gezegenIsimleri, gezegenSayisi,isim);
                break;
            default:
                printf("Gecersiz secim tekrar dene.\n");
        }
    }
    return 0;
}
