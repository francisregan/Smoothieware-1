#ifndef ENDSTOPS_DELTA_MODULE_H
#define ENDSTOPS_DELTA_MODULE_H

#include "libs/Module.h"
#include "libs/Kernel.h"
#include "BaseSolution.h"
#include "libs/nuts_bolts.h"
#include "Endstops.h"

class Endstops_Delta : Endstops {
    public:
	Endstops_Delta();
	Endstops_Delta(Config*);
        //void cartesian_to_actuator( const float millimeters[], ActuatorCoordinates &steps ) override;
        //void actuator_to_cartesian( const ActuatorCoordinates &steps, float millimeters[] ) override;
};




#endif
