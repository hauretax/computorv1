#include <iostream>
#include <stdlib.h>
#include "Num.hpp"

int ft_atoi(char *str)
{
    int nb = 0;
    int m = 1;
    int i = 0;

    if(str[0] == '-'){
        m = -1;
        i++;
    }
    if(str[0] == '+')
        i++;
    while(str[i]){
        if(str[i] < 48 || str[i] > 58)
            return ((nb / 10) * m);
        nb += str[i] - 48;
        if(str[i + 1])
            nb *= 10;
        i++;
    }
    return (nb * m);
}

int main(int argc, char **argv){

    if (argc != 2)
        return (0);

    Num truc(argv[1]);

    return(0);
}