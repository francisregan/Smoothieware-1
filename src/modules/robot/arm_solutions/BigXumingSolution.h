#ifndef BIG_XUMING_SOLUTION_H
#define BIG_XUMING_SOLUTION_H
#include "libs/Module.h"
#include "libs/Kernel.h"
#include "BaseSolution.h"
#include "libs/nuts_bolts.h"

#include "libs/Config.h"

class BigXumingSolution : public BaseSolution {
    public:
	BigXumingSolution(Config*);
        void cartesian_to_actuator( const float millimeters[], ActuatorCoordinates &steps ) override;
        void actuator_to_cartesian( const ActuatorCoordinates &steps, float millimeters[] ) override;
};






#endif
