#include<iostream>
using namespace std;
#include<cmath>

class Cuboids
{
private:
    float height;
    float width;
    float depth;

public:

    // Parametrized Constructor

    Cuboids(float h, float w, float d)
    {
        setHeight(h);
        setWidth(w);
        setDepth(d);
    }

    Cuboids(float h, float w)
    {
        height = h;
        width = w;
        depth = 0;
    }

    // Copy constructor

    Cuboids(const Cuboids &obj)
    {
        height = obj.height;
        width = obj.width;
        depth = obj.depth;
    }

    // default Constructor

    Cuboids()
    {
        height = 0;
        width = 0;
        depth = 0;
    }

    // Destructor

    ~Cuboids()
    {
        cout << "Destructor executed…" << endl;
    }

    // Mutators

    void setHeight(float h)
    {
        if (h >= 0 && h <= 35.00)
        {
            height = h;
        }
        else
        {
            height = 1;
        }
    }

    void setWidth(float w)
    {
        if (w >= 0 && w <= 35.00)
        {
            width = w;
        }
        else
        {
            width = 1;
        }
    }

    void setDepth(float d)
    {
        if (d >= 0 && d <= 35.00)
        {
            depth = d;
        }
        else
        {
            depth = 1;
        }
    }

    // Accessors

    float getHeight()
    {
        return height;
    }

    float getWidth()
    {
        return width;
    }

    float getDepth()
    {
        return depth;
    }

    //Member functions

    void setCuboids(float h , float w , float d)
    {
        setHeight(h);
        setWidth(w);
        setDepth(d);
    }

    void getCuboids()
    {
       cout << "Enter the height of cuboids:" << endl;
       cin >> height;
       setHeight(height);

       cout << "Enter the width of cuboids:" << endl;
       cin >> width;  
       setWidth(width);

       cout << "Enter the depth of cuboids:" << endl;
       cin >> depth;
       setDepth(depth);
    }

    void putCuboids()
    {
        static int i = 0;
        cout << "\nThe height of cuboids " << i + 1 << " is " << height << endl;
        cout << "The width of cuboids " << i + 1 << " is " << width << endl;
        cout << "The depth of cuboids " << i + 1 << " is " << depth << endl << endl;
        i++;
    }

    float getSurfaceArea()
    {
        return (2 * (height * width) + 2 * (height * depth) + 2 * (width * depth));
    }

    float getVolume()
    {
        return height * width * depth;
    }

    float getSpaceDiagonal()
    {
        return sqrt(pow(height , 2) + pow(width , 2) + pow(depth , 2));
    }

    void putCuboidsInfo(float areaResult, float volumeResult , float diagnolResult)
    {
        static int i = 0;
        cout << "\nThe surface area of cuboids " << i + 1 << " is " << areaResult << endl;
        cout << "The volume of cuboids " << i + 1 << " is " << volumeResult << endl;
        cout << "The space diagonal of a cuboids " << i + 1 << " is " << diagnolResult << endl << endl;
        i++;
    }

};

int main()
{
    //cub1 object of class cuboids by using parametrized constructor

    Cuboids cub1(20.3, 4.6, 7.4), cub2, cub3;

    //cub2 object of class cuboids by using setCuboids member function

    cub2.setCuboids(32.4, 4.2, 7.7);

    //cub3 object of class cuboids by using getCuboids member function

    cub3.getCuboids();

    //display cub3 , cub2 , cub1 data by using putCuboids member function 

    cub3.putCuboids();
    cub2.putCuboids();
    cub1.putCuboids();

    //Declare the variables for storing surface , volume and spacediagnol of each cuboids

    float areaResult, volumeResult , diagnolResult;  

    //Display the surfaceArea , volume and spaceDiagnol of cub3  

    areaResult = cub3.getSurfaceArea();
    volumeResult = cub3.getVolume();
    diagnolResult = cub3.getSpaceDiagonal();
    cub3.putCuboidsInfo(areaResult, volumeResult , diagnolResult);

    //Display the surfaceArea , volume and spaceDiagnol of cub2  

    areaResult = cub2.getSurfaceArea();
    volumeResult = cub2.getVolume();
    diagnolResult = cub2.getSpaceDiagonal();
    cub2.putCuboidsInfo(areaResult, volumeResult , diagnolResult);

    //Display the surfaceArea , volume and spaceDiagnol of cub1  

    areaResult = cub1.getSurfaceArea();
    volumeResult = cub1.getVolume();
    diagnolResult = cub1.getSpaceDiagonal();
    cub1.putCuboidsInfo(areaResult, volumeResult , diagnolResult);

    return 0;
}
