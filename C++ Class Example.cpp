#include <iostream>

//this will be a beginning file to place into the 
//repo so that I have something tangible for the hackday.
//i have been told to create a class within C++ to fulfill the spirit of hackday, from there I can elaborate unpon the udemy course.

//documentation for C++ helped here, in reminding me the concepts of C++ and OOP
    class Shape
    {
        int width, height;
        public:
            void SetValues (int, int);
            int Area () {return width*height;}
    };

void Shape::SetValues (int x, int y)
{
    width = x;
    height = y;
}

int main(int argc, char const *argv[])
{
    //Creating instance of classes
    Shape polygon;

    //creating local variable types
    int NumWidth;
    int NumHeight;

    std::cout << "Please enter a width: " << std::endl;
    std::cin >> NumWidth;
    std::cout << "Please enter a height: " << std::endl;
    std::cin >> NumHeight;

    polygon.SetValues(NumWidth, NumHeight);
    std::cout << "The resulting shape has an area of: " << polygon.Area() << std::endl;

    return 0;
}