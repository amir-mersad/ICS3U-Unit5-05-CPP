// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on November 2019
// This program calculates the volume of a cylinder

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <string>


std::string canadapost(std::string cname, std::string cstreet, std::string ccity,
                  std::string cprovince, std::string cpostal,
                  std::string capartement = "") {
    std::string civicaddress;
    std::string full_address;

    // Process
    if(capartement != "") {
        civicaddress = capartement + " " + cstreet;
    } else {
        civicaddress = cstreet;
    }
    cpostal = ccity + " " + cprovince + " " + cpostal;
    full_address = "\n" + cname + "\n" + civicaddress + "\n" + cpostal;
    std::string mylist;
    mylist.append(full_address);
    mylist.c_str();
    return mylist;
}


main() {
    // This function gets the input and calls another function
    std::string name;
    std::string ask;
    std::string apartement;
    std::string street;
    std::string city;
    std::string province;
    std::string postal;
    std::string result;

    // Input
    std::cout << "Please enter your name: ";
    getline(std::cin, name);
    std::cout << "Do you live in an apratement? (y)(n) ";
    getline(std::cin, ask);
    if(ask == "y" || ask == "yes") {
        std::cout << "Please enter your apartement number: ";
        getline(std::cin, apartement);
    }
    std::cout << "Please enter your street address: ";
    getline(std::cin, street);
    std::cout << "Please enter the city which you live in: ";
    getline(std::cin, city);
    std::cout << "Please enter the Province which you live in: ";
    getline(std::cin, province);
    std::cout << "Please enter your postal code: ";
    getline(std::cin, postal);

    // pass it to the other function
    result = canadapost(name, street, city, province, postal, apartement);

    // Output
    std::cout << std::uppercase << result << std::endl;
}
