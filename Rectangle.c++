#include <iostream>
using namespace std;

class Rectangle
{
private:
   int length; int width;
public:
    Rectangle(int l, int w);
    void print_dimension(void);
};

int main(void){
    Rectangle rect1 (5,3); rect1.print_dimension();
    return 0;
}

/*Defination of Rectangle Member function*/
Rectangle::Rectangle(int l, int w)
{
    length = l;
    width = w;
}

/*Defination of print_dimension member*/
void Rectangle::print_dimension(void)
{
    cout << " The Length is = " << length << endl;
    cout << " The Width is = " << width << endl;
}
