#include "relay.h"

int mesaj (t_list relay, int hata)
    {
        if(relay.error == "y")
            printf("%d nolu hata kodu ile %d nolu röle aktif olmuştur\n", hata, relay.num), relay.station = 1;
        else
            printf("%d nolu hata kodu ile %d nolu röle pasif olmuştur\n", hata, relay.num), relay.station = 0;        
    }