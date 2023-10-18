// Create a class Car
#include <iostream>
#include <math.h>

class Car {
    private:
        float power;

    public:
        int max_speed;
        int speed;
        const char* name;

        // Builders
        Car(){
            this->power = 1;
            this->speed = 0;
        }

        Car(int power, const char* name): power(power), name(name){
            if (abs(power - 1.0) < 0.0001){
               this->max_speed = 160;     
            }else if (abs(power - 1.5) < 0.0001) {
                this->max_speed = 180;
            }else if (abs(power - 2.0) < 0.0001){
                this->max_speed = 240;
            }
            this->speed = 0;
        }

        float get_power()
        {
            return this->power;
        }

        int accelerate(int speed)
        {
            if (this->max_speed > this->speed)
            {
                this->speed += speed;
            }
            return speed;
        }

};


int main()
{
    Car fiat;
    Car citroen(2.0, "C4");
    fiat.name = "Fiat 147";

    printf("Potência: %.2f\n", citroen.get_power());
    printf("Name: %s\n", citroen.name);
    printf("Name: %s\n", fiat.name);

    int speed_fiat = fiat.accelerate(100);
    int speed_citroen = citroen.accelerate(200);

    printf("Fiat: %d Km\\h \n", speed_fiat);
    printf("Citroen: %d Km\\h \n", speed_citroen);

    return 0;
}