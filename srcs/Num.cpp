#include <iostream>
#include "Num.hpp"

Num::Num( char *x ) : expr(x){
    std::cout << this->expr <<std::endl;

    this->num[0] = 0;
    this->num[1] = 0;
    this->num[2] = 0;
    
    this->num[3] = 0;
    this->num[4] = 0;
    this->num[5] = 0;

    this->Pars();
    return;
}

Num::~Num( void ){
    std::cout << "byebye Num" <<std::endl;
    return;
}

void    Num::Get_num(int *i, int x){   
    double  v = 1;
   
    while(!(this->expr[(*i)] < 48 || this->expr[(*i)] > 58) || this->expr[(*i)] == '.'){
        if(this->expr[(*i)] == '.' || v < 1)
            v /= 10;
        if(this->expr[(*i)] == '.')
            (*i)++;
        this->num[x] *= 10;
        this->num[x] += this->expr[(*i)] - 48;
           (*i)++;
    }
    if(v < 1){
        this->num[x] *= v;
        v = 1;
        }
}

void    Num::Pars(void){
    int i = 0;
    char buf[3];
    int x = -1;

    std::cout << "it's me get num" <<std::endl;
    //diviser l'expression par bout apres les x^ d
        while(this->expr[i]){
            if (this->expr[i] >= 48 && this->expr[i] <= 58)
                this->Get_num(&i, ++x);
            for (int p = 0; p < 3 ;p++){
                buf[p] = this->expr[i++];
            }    
        }
        std::cout << buf <<std::endl;
    std::cout << "num: " << this->num[0] <<std::endl;
     std::cout << this->num[1] <<std::endl;
      std::cout << this->num[2] <<std::endl;
    return;
}