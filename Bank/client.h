#ifndef client
#define client

#include "pessoa.h"
#include <iostream>

class Client : public Pessoa {

    char account_namber[10];
    char manager_name[50];
    char agency_name[50];
    char agency_number[10];

    public:
        Client(const char *a_number, const char* ag_number, const char* _name, const char* _rg, const char* _cpf, const int _age);
        ~Client();
        void set_account_numbet(const char *account);
        void set_manager_name(const char *m_name);
        void set_agency_name(const char *a_name);
        void set_agency_number(const char *a_number);
        void print() const;
        const char* get_account(void) const;
        const char* get_agency(void) const;
};

#endif