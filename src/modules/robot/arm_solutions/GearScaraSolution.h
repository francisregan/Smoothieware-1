#ifndef GEAR_SCARA_SOLUTION_H
#define GEAR_SCARA_SOLUTION_H
//#include "libs/Module.h"
#include "BaseSolution.h"

class Config;

class GearScaraSolution : public BaseSolution {
    public:
        GearScaraSolution(Config*);
        void cartesian_to_actuator(const float[], ActuatorCoordinates &) override;
        void actuator_to_cartesian(const ActuatorCoordinates &, float[] ) override;

        bool set_optional(const arm_options_t& options) override;
        bool get_optional(arm_options_t& options, bool force_all) override;

    private:
        void init();
        float to_degrees(float radians);

        float arm1_length;
        float arm2_length;
        int   shoulder_master_gear_teeth_count;
        int   shoulder_slave_gear_teeth_count;
        int   elbow_master_gear_teeth_count;
        int   elbow_slave_gear_teeth_count;
        //float morgan_offset_x;
        //float morgan_offset_y;
        //float morgan_scaling_x;
        //float morgan_scaling_y;
        //float morgan_undefined_min;
        //float morgan_undefined_max;
        float slow_rate;
};

#endif // GEAR_SCARA_SOLUTION_H
