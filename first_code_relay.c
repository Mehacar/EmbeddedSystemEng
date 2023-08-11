#include <stdio.h>

int error[] = {1,2,3,4,5,6,7,8,9,10};
int relay1 = 0;
int relay2 = 0;
int relay3 = 0;
int relay4 = 0;
int relay5 = 0;
int number;
int position;
int relay;

int mesaj (int number, int relay, int position)
    {
        if(position == 1)
            printf("%d nolu hata kodu ile %d nolu röle aktif olmuştur\n", number, relay);
        else
            printf("%d nolu hata kodu ile %d nolu röle pasif olmuştur\n", number, relay);        
    }

int main()
{
    printf("1 ile 10 arasında bir sayı giriniz\n");
    scanf("%d", &number);

    if(number >= 1 && number <= 10)
    {
    if (number == 1 || number == 3 || number == 5 || number == 7 || number == 9)
        printf("Hata var ise 1 yok ise 0 giriniz\n"), scanf("%d", &position);
    if(number == 1)    
        relay1 = 1, relay = 1, mesaj(number, relay, position);
    else if (number == 3)
        relay2 = 1, relay = 2, mesaj(number, relay, position);
    else if (number == 5)
        relay3 = 1, relay = 3, mesaj(number, relay, position);
    else if (number == 7)
        relay4 = 1, relay = 4, mesaj(number, relay, position);
    else if (number == 9)
        relay5 = 1, relay = 5, mesaj(number, relay, position);
    else
        printf("Bu hata kodu önemsizdir");  
    }
    return 0;
}