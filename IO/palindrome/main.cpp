#include <iostream>

using namespace std;

int main(void)
{
    int n, num, digit, rev = 0;
    cout << "Type a number greater than 0";
    cin >> num;
    n = num;
    do{
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;

    }while(num != 0);

    if (n == rev)
    {
        cout << n << " is a palyndrome" << endl;
    }else{
        cout << n << " is not a palyndrome" << endl;
    }
    return 0;
}