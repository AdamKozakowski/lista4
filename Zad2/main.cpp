#include <iostream>
#include "Figure.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"

using namespace std;

int main(){
    Figure** figures = new Figure*[3];
    figures[0] = new Circle(1);
    figures[1] = new Triangle(1,1,1);
    figures[2] = new Rectangle(2,3);

    for(int i=0; i<3; i++){
        cout << *figures[i] << endl;
    }
    
    cout << "Pola figur:" << endl;
    //wczoraj działało, teraz pokazuje, że np circle nie ma składowej name.
    for(int i=0; i<3; i++){
        cout << figures[i]->_name_of_figure << figures[i]->area() << endl;
    }
    for(int i=3; 0 < i; i--){
        delete figures[i];
    }

    delete[] figures;
}
