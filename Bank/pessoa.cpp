#include "pessoa.h"

Pessoa::Pessoa(const char* name, const char* rg, const char* cpf, const int age)
{
    this->set_name(name);
    this->set_cpf(cpf);
    this->set_rg(rg);
    this->age = age;
}

void Pessoa::set_name(const char *name)
{
    strcpy(this->name, name);
}

void Pessoa::set_cpf(const char *cpf)
{
    strcpy(this->cpf, cpf);
}

void Pessoa::set_rg(const char *rg)
{
    strcpy(this->rg, rg);
}

const char *Pessoa::get_cpf() const 
{
    return this->cpf;
}

const char *Pessoa::get_name() const 
{
    return this->name;
}

const char *Pessoa::get_rg() const 
{
    return this->rg;
}