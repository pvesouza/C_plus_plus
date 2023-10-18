#include <iostream>
#include <exception>
#include <string.h>

using namespace std;


class My_exception : public error_condition {

    private:
        char* msg;

    public:

        My_exception(char* _msg)
        {
            this->msg = _msg;
        }

        const char* get_message()
        {
            return this->msg;
        }
};

int factorial(int n)
{
    int fact = 1;
    if (n < 0)
    {  
        throw  My_exception("Erro no numeral");
    }else{
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        cout << "Factorial is " << fact << endl;
        return fact;
    }
}

int main(void)
{
    int n = 0;
    cout << "Type a number to get the factorial:" << endl;
    cin >> n;

    try
    {
        int f = factorial(n);
        cout << f;

    }catch (My_exception &e)
    {
        cout << "Exception" << endl;
        cout << e.get_message() << endl;
    } 
    return 0;
}