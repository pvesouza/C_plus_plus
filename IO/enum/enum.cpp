#include <iostream>

using namespace std;

int main(void)
{
    enum Months {

        January, February, March = 7, May, April
    };

    cout << January << "--" << April <<endl;
    return 0;
}