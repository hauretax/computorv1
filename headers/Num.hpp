#ifndef NUM_HPP
# define NUM_HPP

class Num {

public:
    double num[6];
    char const *expr;

    Num( char * );
    ~Num( void );
    void Get_num(int *i, int x);
    void Pars(void);
    
};

#endif