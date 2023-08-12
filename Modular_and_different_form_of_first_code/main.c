
#include "relay.h"

int hata;

int main()
{
    printf("1 ile 10 arasında bir sayı giriniz\n");
    scanf("%d", &hata);

    if (hata == 1 || hata == 3 || hata == 5 || hata == 7 || hata == 9)
        printf("Hata var ise y, yok ise n yazınız\n"), scanf("%p", &relay.error);

    if(hata >= 1 && hata <= 10)
    {
        switch (hata)
        {
        case 1:
            relay.num = 1;
            relay.station = 0;
            mesaj(relay, hata);
            break;
        case 3:
            relay.num = 2;
            relay.station = 0;
            mesaj(relay, hata);
            break;
        case 5:
            relay.num = 3;
            relay.station = 0;
            mesaj(relay, hata);
            break;
        case 7:
            relay.num = 4;
            relay.station = 0;
            mesaj(relay, hata);
            break;
        case 9:
            relay.num = 5;
            relay.station = 0;
            mesaj(relay, hata);
            break;
        
        default:
            printf("Bu hata kodu önemsizdir"); 
        }
    }
}
