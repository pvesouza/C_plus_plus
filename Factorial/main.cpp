// Write a program that calculates a factorial of a number
# include <iostream>
using namespace std;

class Math{ 

    public:
        Math()
        {

        }

        long int factorial(int n)
        {
            if (n >= 0)
            {
                long unsigned int fact = 1;

                for (int i = 1; i <= n; i++)
                {
                    fact = fact * i;
                }

                return fact;
            }else{
                cout << "Error!!";
                return -1l;
            }

        }
    
};

void print_number(int n)
{
    n = n + 1;
    cout << "Number: " << n << endl;
}

void print_number_2(int &n)
{
    n = n + 1;
    cout << "Number: " << n << endl;
}


int main(void)
{

    int p = 100;
    print_number(p);
    cout << "Number: " << p << endl;
    print_number_2(p);
    cout << "Number: " << p << endl;
    
    return 0;
}