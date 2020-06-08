//
//  source1.hpp
//  lab6
//
//  Created by Volodymyr on 6/8/20.
//  Copyright © 2020 Volodymyr Hrytsiuk. All rights reserved.
//

#ifndef source1_hpp
#define source1_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <ctime>
#include <cmath>

//Лабораторна робота 6.1
//Грицюк Володимир
//ІП-92


using namespace std;
class stereoFigure{
protected:
    double a;
    double b;
    double c;
public:
    void set(double a, double b=0, double c=0);
    virtual double find_area() = 0;
    virtual double find_volume() = 0;
    virtual void print() = 0;
};

class cube : public stereoFigure{
public:
    double find_area();
    void print();
    double find_volume();
};

class tetrahedron : public stereoFigure{
public:
    double find_area();
    void print();
    double find_volume();
};

class parellelepiped:public stereoFigure{
    public:
    double find_area();
    void print();
    double find_volume();
};




#endif /* source1_hpp */
