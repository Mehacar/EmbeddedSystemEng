#include <stdio.h>

typedef struct s_list
{

    int num;     //(1:10)
    char* error;      //(y/n)
    int position; //(1/0)
    int station;

} t_list;

t_list relay;

int hata;


int mesaj (t_list relay, int hata)
    {
        if(relay.error == "n")
            printf("%d nolu hata kodu ile %d nolu röle pasif olmuştur\n", hata, relay.num), relay.station = 1;
        else
            printf("%d nolu hata kodu ile %d nolu röle aktif olmuştur\n", hata, relay.num), relay.station = 0;        
    }


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
