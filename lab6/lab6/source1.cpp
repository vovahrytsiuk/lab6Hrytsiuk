//
//  source1.cpp
//  lab6
//
//  Created by Volodymyr on 6/8/20.
//  Copyright © 2020 Volodymyr Hrytsiuk. All rights reserved.
//

#include "source1.hpp"



void stereoFigure::set(double a, double b, double c){
    this-> a = a;
    this-> b = b;
    this-> c = c;
}

double cube::find_area(){
    double S = pow(this->a, 2) * 6;
    return S;
}

void cube::print(){
    cout << endl;
    cout << "Area of the cube with the side " << this->a << " is " ;
    cout <<  this->find_area() << " squared units" << endl;
    cout << "Volume of the cube with side " << this->a << " is ";
    cout << this-> find_volume() << " cubic units " << endl;
    cout << endl;
}

double cube::find_volume(){
    double V = pow(a, 3);
    return V;
}

double tetrahedron::find_area(){
    double S = pow(this->a, 2)*sqrt(3);
    return S;
}

double tetrahedron::find_volume(){
    double V = pow(this-> a, 3)*sqrt(2)/12;
    return V;
}

void tetrahedron::print(){
    cout << endl;
    cout << "Area of tetrahedron with side " << this->a << " is ";
    cout << this->find_area() << " squred units "<< endl;
    cout << "Volume of tetrahedron with side " << this-> a << " is ";
    cout << this->find_volume() << " cubic units" << endl;
    cout << endl;
}

void parellelepiped::print(){
    cout << endl;
    cout << "Area of parallelepiped with sides " << a << "x" << b << "x" << c << " is ";
    cout << this->find_area() << " squared units" << endl;
    cout << "Volume  of parallelepiped with sides " << a << "x" << b << "x" << c << " is ";
    cout << this->find_volume() << " cubic units" << endl;
    cout << endl;
}

double parellelepiped::find_area(){
    double S = 2*(a*b+b*c+c*a);
    return S;
}

double parellelepiped::find_volume(){
    double V = a*b*c;
    return V;
}
