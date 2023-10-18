

class Poligon
{
    public:

    virtual float calc_area();
    int get_sides();
    Poligon();

    protected:
        float area;
        int number_of_sides;
};