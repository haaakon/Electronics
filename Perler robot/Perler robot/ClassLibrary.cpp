//
// ClassLibrary.cpp 
// Class library C++ code
// ----------------------------------
// Developed with embedXcode 
// http://embedXcode.weebly.com
//
// Project 		Perler robot
//
// Created by 	Håkon Bogen, 27.01.14 09:45
// 				Håkon Bogen
//
// Copyright 	© Håkon Bogen, 2014
// License     <#license#>
//
// See 			ClassLibrary.h and ReadMe.txt for references
//


// Library header
#include "ClassLibrary.h"

// Code
ClassLibrary::ClassLibrary() {
    
}

void ClassLibrary::begin() {
    _data = 0;
}

String ClassLibrary::WhoAmI() {
    return "ClassLibrary";
}

void ClassLibrary::set(uint8_t data) {
    _data = data;
}

uint8_t ClassLibrary::get() {
    return _data; 
}

