template <typename t, typename v>

class pairs
{
    t x;
    v y;

public:
    void setx(t x)
    {
        this->x = x;
    }

    t getx()
    {
        return x;
    }

    void sety(v y)
    {
        this->y = y;
    }
    v gety()
    {
        return y;
    }
};