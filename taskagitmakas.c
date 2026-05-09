#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Oyun()
{
    short secim = -1, botSecim = -1, botSkor = 0, kullaniciSkor = 0, round = 1, hataLimi = 0;
    printf("Hosgeldin, hadi baslayalim round: %d \n", round);
    printf("1-tas\n");
    printf("2-kagit\n");
    printf("3-makas\n");

    while (round < 4)
    {
        hataLimi = 0;
        if (round > 1)
            printf("round: %d\n", round);
        printf("sec: ");
        scanf("%d", &secim);

        switch (secim)
        {
        case 1:
            printf("tas sectin");
            break;
        case 2:
            printf("kagit sectin");
            break;
        case 3:
            printf("makas sectin");
            break;
        default:
            printf("bir hata olustu");
            hataLimi = 1;
        }
        printf("\n");
        if (hataLimi == 0)
        {
            botSecim = rand() % 3 + 1;
            printf("bot secimi: %s\n", botSecim == 1 ? "tas" : botSecim == 2 ? "kagit"
                                                           : botSecim == 3   ? "makas"
                                                                             : "hata");
            ;
            if (secim == botSecim)
                printf("berabere, skor sabit kaldi");
            else if ((secim == 1 && botSecim == 2) || (secim == 2 && botSecim == 3) || (secim == 3 && botSecim == 1))
            {
                printf("maalesef, bot bir puan kazandi");
                botSkor++;
            }
            else if ((secim == 1 && botSecim == 3) || (secim == 2 && botSecim == 1) || (secim == 3 && botSecim == 2))
            {
                printf("tebrikler, bir puan kazandin");
                kullaniciSkor++;
            }
        }
        else
        {
            printf("bir sorun olustu");
            return;
        }
        printf("\n");
        printf("%d.round sona erdi", round);
        printf("\n");
        round++;
    }

    if (botSkor == kullaniciSkor)
        printf("oyun berabere bitti");
    else if (botSkor > kullaniciSkor)
        printf("oyunu bot kazandi");
    else if (kullaniciSkor > botSkor)
        printf("tebrikler oyunu siz kaznadiniz");
    else
    {
        printf("beklenmedik bir hata olustu");
        return;
    }
    printf("\nbot puan: %d, kullanici puan: %d", botSkor, kullaniciSkor);
}

int main()
{
    srand(time(NULL));
    Oyun();
    return 0;
}