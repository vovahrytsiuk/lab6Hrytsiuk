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
    
    cout << "For string:" << endl;
    container<string> strc(5);
    strc.add_element("101");
    strc.add_element("9");
    strc.add_element("5");
    strc.print();
    strc.selection_sort();
    cout << "Sorted string:" << endl;
    strc.print();
    cout << endl;
    
//    cout << "For char*:" << endl;
//    container<char*> carr(5);
//    char* s1 = "12345";
//    char* s2 = "11234";
//    char* s3 = "111234";
//    char* s4 = "2456";
//    carr.add_element(s1, 5);
//    carr.add_element(s2, 5);
//    carr.add_element(s3, 6);
//    carr.add_element(s4, 4);
//    carr.print();
//    cout << "Sorted char*" << endl;
//    carr.print();
    

    cout << "For Hex:" << endl;
    HEX n1("AAF95837");
    HEX n2("AAC94385");
    HEX n3("AD284934");
    HEX n4("453");
    HEX n5("4AD");
    HEX n6("ABC");
    container<HEX> harr(5);
    harr.add_element(n1);
    harr.add_element(n2);
    harr.add_element(n3);
    harr.add_element(n4);
    harr.add_element(n5);
    harr.add_element(n6);
    harr.print();
    harr.selection_sort();
    cout << "Sorted hexes:" << endl;
    harr.print();
    char a = 'A';
    char b = 'F';
    bool w = a<b;
    cout << w;
    return 0;
}
