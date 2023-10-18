#ifndef pessoa
#define pessoa

#include <string.h>

class Pessoa {
    char name[100];
    char rg[50];
    char cpf[13];
    int age;

public:
    Pessoa(const char* name, const char* rg, const char* cpf, const int age);
    void set_cpf(const char *cpf);
    void set_rg(const char *rg);
    void set_name(const char *name);
    const char *get_name(void) const ;
    const char *get_rg(void) const ;
    const char *get_cpf(void) const ;
};

#endif