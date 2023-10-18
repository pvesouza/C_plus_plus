#include <iostream>
#include "client.h"
#include "pessoa.h"

int main(void)
{
    Client test("1268-8", "260886-3", "Pedro Souza", "01395783403", "284875804", 37);
    test.print();
    test.set_name("Pedro Victor Eugênio de Souza");
    test.print();
}