//
//  main.cpp
//  lab6
//
//  Created by Volodymyr on 6/8/20.
//  Copyright © 2020 Volodymyr Hrytsiuk. All rights reserved.
//

#include <iostream>
#include <string>
#include "source.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    container<int> arr(5);
    arr.add_element(2);
    arr.add_element(5);
    arr.add_element(14);
    arr.add_element(7);
    arr.add_element(1);
    arr.print();
    arr.selection_sort();
    arr.print();
    container<char*> strarr(5);
    char* str1 = "101";
    strarr.add_element(str1);
    char* str2 = "9";
    strarr.add_element(str2);
    char*str3 = "5";
    strarr.add_element(str3);
    strarr.print();
    strarr.selection_sort();
    strarr.print();
    
    
    container<string> strc(5);
    strc.add_element("101");
    strc.add_element("9");
    strc.add_element("5");
    strc.print();
    strc.selection_sort();
    strc.print();
    return 0;
}
