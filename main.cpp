//
//  main.cpp
//  Human
//
//  Created by Diego Calvo on 4/26/14.
//  Copyright (c) 2014 Diego Calvo. All rights reserved.
//

#include <iostream>
#include "Conception.h"
#include "Birth.h"
#include "Infancy.h"
#include "Toddlerness.h"
#include "Childhood.h"
#include "Preteenness.h"
#include "Teenage.h"
#include "College.h"
#include "Career.h"
#include "Marriage.h"
#include "Children.h"
#include "MiddleAges.h"
#include "Retirement.h"
#include "Dementia.h"
#include "Death.h"
#include "Afterlife.h"
#include "InternshipAtBestBuy.h"



using namespace std;

//this is going to be existential as shit

int main(int argc, const char * argv[])
{
    bool eternity = true;
    while (eternity) {
        conceive();
        birth();
        infancy();
        toddlerness();
        childhood();
        preteenness();
        teenage();
        college();
        career();
        marriage();
        children();
        middleAges();
        retirement();
        dementia();
        death();
        afterlife();
        internshipAtBestBuy();
    }
    return 0;
}

