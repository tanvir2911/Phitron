#include <bits/stdc++.h>

using namespace std;

class Cuboid{
private:
    int length, width, height;

public:
    Cuboid()
    {
        length = 0;
        width = 0;
        height = 0;
    }

    Cuboid(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    int getVolume()
    {
        return length*width*height;
    }

    int getSurfaceArea()
    {
        return 2*length*width + 2*length*height + 2*height*width;
    }

    void printVolume()
    {
        cout<<"Volume "<<getVolume()<<"\n";
    }
    void printSurfaceArea()
    {
        cout<<"Suface Area "<<getSurfaceArea()<<"\n";
    }
};

bool comp_volume(Cuboid c1, Cuboid c2)
{
    return c1.getVolume() < c2.getVolume();
}

bool comp_surface_area(Cuboid c1, Cuboid c2)
{
    return c1.getSurfaceArea() < c2.getSurfaceArea();
}

int main()
{
    int n;
    cin>>n;
    vector<Cuboid>c(n);

    for(int i=0;i<n;i++)
    {
        c[i] = Cuboid(11-i,10-i,12-i);
    }

    for(int i=0;i<n;i++)
    {
        cout<<"Volume for index "<<i<<" is "<<c[i].getVolume()<<"\n";
        cout<<"Surface Area for index "<<i<<" is "<<c[i].getSurfaceArea()<<"\n";
    }

    cout<<"After Sorting: \n";

    sort(c.begin(), c.end(), comp_volume);
    for(int i=0;i<n;i++)
    {
        c[i].printVolume();
    }

    sort(c.begin(), c.end(), comp_surface_area);
    for(int i=0;i<n;i++)
    {
        c[i].printSurfaceArea();
    }


    return 0;
}
