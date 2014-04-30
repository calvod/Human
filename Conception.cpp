//
//  Conception.cpp
//  Human
//
//  Created by Diego Calvo on 4/30/14.
//  Copyright (c) 2014 Diego Calvo. All rights reserved.
//

#include "Conception.h"
void zygote() {}
void blastocyst() {}
void nidation() {}
void embryo() {}
void developHeart() {}
void beginBrain() {}
void developFetus() {
    //third month
    
    
    //fourth month
    
    
    //fifth month


}


void conceive() {
    
    cout << "Hello, Womb!\n";
    cout << "Please enter the name of your egg: ";
    string name;
    cin >> name;
    cout << "\n" << name << " is conceiving...\n";
    zygote();
    blastocyst();
    nidation();
    embryo();
    developHeart();
    beginBrain();
    developFetus();
    this_thread::sleep_for (std::chrono::seconds(3));

}
