#include <iostream>
#include "poligon.h"

using namespace std;

// Creating a circle
class Circle : public Poligon{

    private:
        float radius;
        const float PI = 3.1416;
        

    public:
        Circle(float _radius)
        {
            this->radius = _radius;
        }

        float calc_area()
        {
            this->area = PI * this->radius * this->radius;
            return this->area;
        }
};

class Square : public Poligon{
    private:
        float side;

    public:
        Square(float _side)
        {
            this->side = _side;
        }

        float calc_area()
        {
            this->area = this->side * this->side;
            return area;
        }

};

// Polymorphism is only achieved by pointers
void print_area(Poligon *p)
{
    cout << "Area is Equals to: " << p->calc_area() << endl;
}

int main (void)
{
    Circle c(10.0);
    Square *s = new Square(5);
    print_area(&c);
    print_area(s);
    return 0;
}
