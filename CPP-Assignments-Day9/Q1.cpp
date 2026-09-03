#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int f, int i)
    {
        feet = f + i / 12;
        inches = i % 12;
    }

    Distance operator+(const Distance &d)
    {
        Distance temp;

        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        if (temp.inches >= 12)
        {
            temp.feet++;
            temp.inches -= 12;
        }

        return temp;
    }

    // Prefix increment: increments inches
    Distance &operator++()
    {
        inches++;

        if (inches >= 12)
        {
            feet++;
            inches = 0;
        }

        return *this;
    }

    // Prefix decrement: decrements inches
    friend Distance &operator--(Distance &d);

    friend ostream &operator<<(ostream &out, const Distance &d);
    friend istream &operator>>(istream &in, Distance &d);
};

Distance &operator--(Distance &d)
{
    if (d.inches > 0)
    {
        d.inches--;
    }
    else if (d.feet > 0)
    {
        d.feet--;
        d.inches = 11;
    }

    return d;
}

ostream &operator<<(ostream &out, const Distance &d)
{
    out << d.feet << " feet " << d.inches << " inches";
    return out;
}

istream &operator>>(istream &in, Distance &d)
{
    cout << "Enter feet: ";
    in >> d.feet;

    cout << "Enter inches: ";
    in >> d.inches;

    if (d.inches >= 12)
    {
        d.feet += d.inches / 12;
        d.inches %= 12;
    }

    return in;
}

int main()
{
    Distance d1, d2, d3;

    cout << "Enter first distance:" << endl;
    cin >> d1;

    cout << "\nEnter second distance:" << endl;
    cin >> d2;

    d3 = d1 + d2;

    cout << "\nFirst distance: " << d1 << endl;
    cout << "Second distance: " << d2 << endl;
    cout << "Sum: " << d3 << endl;

    ++d1;
    cout << "\nAfter incrementing first distance: " << d1 << endl;

    --d2;
    cout << "After decrementing second distance: " << d2 << endl;

    return 0;
}