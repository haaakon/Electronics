//
// File			ClassLibrary.h
// Class library header
//
// Details		<#details#>
//
// Project	 	Perler robot
// Developed with [embedXcode](http://embedXcode.weebly.com)
//
// Author		Håkon Bogen
// 				Håkon Bogen
//
// Date			27.01.14 09:45
// Version		<#version#>
//
// Copyright	© Håkon Bogen, 2014
// License	    <#license#>
//
// See			ReadMe.txt for references
//


// Core library - IDE-based
#if defined(MPIDE) // chipKIT specific
#include "WProgram.h"
#elif defined(DIGISPARK) // Digispark specific
#include "Arduino.h"
#elif defined(ENERGIA) // LaunchPad MSP430, Stellaris and Tiva, Experimeter Board FR5739 specific
#include "Energia.h"
#elif defined(MAPLE_IDE) // Maple specific
#include "WProgram.h"
#elif defined(CORE_TEENSY) // Teensy specific
#include "WProgram.h"
#elif defined(WIRING) // Wiring specific
#include "Wiring.h"
#elif defined(ARDUINO) && (ARDUINO >= 100) // Arduino 1.0x and 1.5x specific
#include "Arduino.h"
#elif defined(ARDUINO) && (ARDUINO < 100)  // Arduino 23 specific
#include "WProgram.h"
#endif // end IDE

#ifndef ClassLibrary_h

#define ClassLibrary_h


class ClassLibrary {
  
public:
  ClassLibrary();
  void begin();
  String WhoAmI();
  void set(uint8_t data);
  uint8_t get();
  
private:
  uint8_t _data;
};

#endif
