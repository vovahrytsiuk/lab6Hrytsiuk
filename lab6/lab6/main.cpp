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
    cout << "For int:" << endl;
    container<int> arr(5);
    arr.add_element(2);
    arr.add_element(5);
    arr.add_element(14);
    arr.add_element(7);
    arr.add_element(1);
    arr.print();
    arr.selection_sort();
    cout << "Sotrted ints:" << endl;
    arr.print();
    cout << endl;
    
    cout << "For char:" << endl;
    container<char> strarr(5);
    char str1 = '1';
    strarr.add_element(str1);
    char str2 = '9';
    strarr.add_element(str2);
    char str3 = '5';
    strarr.add_element(str3);
    strarr.print();
    strarr.selection_sort();
    cout << "Sorted chars:" << endl;
    strarr.print();
    cout << endl;
    
    cout << "For char*:" << endl;
    container<string> strc(5);
    strc.add_element("101");
    strc.add_element("9");
    strc.add_element("5");
    strc.print();
    strc.selection_sort();
    cout << "Sorted char*:" << endl;
    strc.print();
    cout << endl;
    
    cout << "For string:" << endl;
    return 0;
}
