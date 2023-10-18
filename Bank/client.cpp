#include "client.h"

//Constructor

Client::Client(const char *a_number, const char* ag_number, const char* _name, const char* _rg, const char* _cpf, const int _age) : Pessoa(_name, _cpf, _rg, _age)
{
    this->set_account_numbet(a_number);
    this->set_agency_number(ag_number);
}

// Destructor
Client::~Client()
{

}

void Client::set_manager_name(const char* m_name)
{
    stpcpy(this->manager_name, m_name);
}

void Client::set_account_numbet(const char* a_number)
{
    strcpy(this->account_namber, a_number);
}

void Client::set_agency_name(const char* a_name)
{
    strcpy(this->agency_name, a_name);
}

void Client::set_agency_number(const char* a_number)
{
    strcpy(this->agency_number, a_number);
}

const char* Client::get_account() const 
{
    return this->account_namber;
}

const char* Client::get_agency() const
{
    return this->agency_number;
}

void Client::print() const
{
    std::cout << "Name: " << this->get_name() << std::endl;
    std::cout << "CPF: " << this->get_cpf() << std::endl;
    std::cout << "RG: " << this->get_rg() << std::endl;
     std::cout << "Count: " << this->get_account() << std::endl;
    std::cout << "Agency: " << this->get_agency() << std::endl;
}