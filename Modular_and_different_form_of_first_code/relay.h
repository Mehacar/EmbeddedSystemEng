#ifndef RELAY_H
# define RELAY_H

# include <stdio.h>

typedef struct s_list
{

    int num;     //(1:10)
    char* error;      //(y/n)
    int position; //(1/0)
    int station;

} t_list;

t_list relay;

int		mesaj (t_list relay, int hata);
 
#endif
