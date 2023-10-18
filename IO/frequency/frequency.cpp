#include <iostream>

using namespace std;

int main(void)
{
    cout << "type a number greater than 0" << endl;
    long int num = 0;
    cin >> num;
    cout << "choose a number btween 0 - 9 to measure its occurences" << endl;
    int n = 0;
    cin >> n;
    int frequency = 0;

    while (num > 0)
    {
        if (num % 10 == n)
        {
            frequency++;
        }
        num = num / 10;
    }

    cout << "Frequency=" << frequency << endl;
    return 0;
}