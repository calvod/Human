//
//  Human.h
//  Human
//
//  Created by Diego Calvo on 5/1/14.
//  Copyright (c) 2014 Diego Calvo. All rights reserved.
//

#ifndef __Human__Human__
#define __Human__Human__

#include <iostream>
#include "Arm.h"
#include "Leg.h"
#include "Foot.h"
#include "Hand.h"
#include "Head.h"
#include "Nervous_Cardio_Respiratory_Disgestive_Systems.h"

struct Human {
    unsigned int daysAfterOvulation = 0;
    Arm leftArm;
    Arm rightArm;
    Leg leftLeg;
    Leg rightLeg;
    Hand leftHand;
    Hand rightHand;
    Foot leftFoot;
    Foot rightFoot;
    Head head;
    Nervous_Cardio_Respiratory_Disgestive_Systems nervous_Cardio_Respiratory_Digestive_System;
};

#endif /* defined(__Human__Human__) */
