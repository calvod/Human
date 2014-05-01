//
//  Conception.cpp
//  Human
//
//  Created by Diego Calvo on 4/30/14.
//  Copyright (c) 2014 Diego Calvo. All rights reserved.
//

#include "Conception.h"
void zygote() {
    cout << "undergoing mitosis...\n";
    //multiply cells by 2 several times

}
void blastocyst() {
    cout << "inner cell mass forming...\n";
    cout << "trophoblast forming...\n";
    cout << "placenta forming...\n";
    
    
    
    //should be 200-300 cells at this point, 5 days have passed

}
void nidation(Human *mother) {
    bool result = false;
    cout << "blastocyst is trying to adhere to wall of uterus\n";
    
    
    if (mother->daysAfterOvulation >= 6 || mother->daysAfterOvulation <= 12) {
        result = true;
    }
    

}
void embryo() {}
void developHeart() {}
void beginBrain() {}
void developFetus() {
    //third month
    
    
    //fourth month
    
    
    //fifth month


}


void conceive(Human *mother) {
    
    cout << "Hello, Womb!\n";
    cout << "Please enter the name of your egg: ";
    string name;
    cin >> name;
    cout << "\n" << name << " is conceiving...\n";
    zygote();
    blastocyst();
    nidation(mother);
    embryo();
    developHeart();
    beginBrain();
    developFetus();
    this_thread::sleep_for (std::chrono::seconds(3));

}





