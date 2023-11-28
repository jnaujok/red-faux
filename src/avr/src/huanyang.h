/******************************************************************************\

                  This file is part of the Buildbotics firmware.

         Copyright (c) 2015 - 2023, Buildbotics LLC, All rights reserved.

          This Source describes Open Hardware and is licensed under the
                                  CERN-OHL-S v2.

          You may redistribute and modify this Source and make products
     using it under the terms of the CERN-OHL-S v2 (https:/cern.ch/cern-ohl).
            This Source is distributed WITHOUT ANY EXPRESS OR IMPLIED
     WARRANTY, INCLUDING OF MERCHANTABILITY, SATISFACTORY QUALITY AND FITNESS
      FOR A PARTICULAR PURPOSE. Please see the CERN-OHL-S v2 for applicable
                                   conditions.

                 Source location: https://github.com/buildbotics

       As per CERN-OHL-S v2 section 4, should You produce hardware based on
     these sources, You must maintain the Source Location clearly visible on
     the external case of the CNC Controller or other product you make using
                                   this Source.

                 For more information, email info@buildbotics.com

\******************************************************************************/

#pragma once

#include "spindle.h"


void huanyang_init();
void huanyang_deinit(deinit_cb_t cb);
void huanyang_set(float power);
float huanyang_get();
uint8_t huanyang_get_status();


/// See Huanyang VFD user manual
typedef enum {
  HY_PD000_PARAMETER_LOCK,
  HY_PD001_SOURCE_OF_OPERATION_COMMANDS,
  HY_PD002_SOURCE_OF_OPERATING_FREQUENCY,
  HY_PD003_MAIN_FREQUENCY,
  HY_PD004_BASE_FREQUENCY,
  HY_PD005_MAX_FREQUENCY,
  HY_PD006_INTERMEDIATE_FREQUENCY,
  HY_PD007_MIN_FREQUENCY,
  HY_PD008_MAX_VOLTAGE,
  HY_PD009_INTERMEDIATE_VOLTAGE,
  HY_PD010_MIN_VOLTAGE,
  HY_PD011_FREQUENCY_LOWER_LIMIT,
  HY_PD012_RESERVED,
  HY_PD013_PARAMETER_RESET,
  HY_PD014_ACCEL_TIME_1,
  HY_PD015_DECEL_TIME_1,
  HY_PD016_ACCEL_TIME_2,
  HY_PD017_DECEL_TIME_2,
  HY_PD018_ACCEL_TIME_3,
  HY_PD019_DECEL_TIME_3,
  HY_PD020_ACCEL_TIME_4,
  HY_PD021_DECEL_TIME_4,
  HY_PD022_FACTORY_RESERVED,
  HY_PD023_REV_ROTATION_SELECT,
  HY_PD024_STOP_KEY,
  HY_PD025_STARTING_MODE,
  HY_PD026_STOPPING_MODE,
  HY_PD027_STARTING_FREQUENCY,
  HY_PD028_STOPPING_FREQUENCY,
  HY_PD029_DC_BRAKING_TIME_AT_START,
  HY_PD030_DC_BRAKING_TIME_AT_STOP,
  HY_PD031_DC_BRAKING_VOLTAGE_LEVEL,
  HY_PD032_FREQUENCY_TRACK_TIME,
  HY_PD033_CURRENT_LEVEL_FOR_FREQUENCY_TRACK,
  HY_PD034_VOLTAGE_RISE_TIME_FOR_FREQUENCY_TRACK,
  HY_PD035_FREQUENCY_STEP_LENGTH,
  HY_PD036,
  HY_PD037,
  HY_PD038,
  HY_PD039,
  HY_PD040,
  HY_PD041_CARRIER_FREQUENCY,
  HY_PD042_JOGGING_FREQUENCY,
  HY_PD043_S_CURVE_TIME,
  HY_PD044_MULTI_INPUT_FOR,
  HY_PD045_MULTI_INPUT_REV,
  HY_PD046_MULTI_INPUT_RST,
  HY_PD047_MULTI_INPUT_SPH,
  HY_PD048_MULTI_INPUT_SPM,
  HY_PD049_MULTI_INPUT_SPL,
  HY_PD050_MULTI_OUTPUT_DRV,
  HY_PD051_MULTI_OUTPUT_UPF,
  HY_PD052_MULTI_OUTPUT_FA_FB_FC,
  HY_PD053_MULTI_OUTPUT_KA_KB,
  HY_PD054_MULTI_OUTPUT_AM,
  HY_PD055_AM_ANALOG_OUTPUT_GAIN,
  HY_PD056_SKIP_FREQUENCY_1,
  HY_PD057_SKIP_FREQUENCY_2,
  HY_PD058_SKIP_FREQUENCY_3,
  HY_PD059_SKIP_FREQUENCY_RANGE,
  HY_PD060_UNIFORM_FREQUENCY_1,
  HY_PD061_UNIFORM_FREQUENCY_2,
  HY_PD062_UNIFORM_FREQUENCY_RANGE,
  HY_PD063_TIMER_1_TIME,
  HY_PD064_TIMER_2_TIME,
  HY_PD065_COUNTING_VALUE,
  HY_PD066_INTERMEDIATE_COUNTER,
  HY_PD067,
  HY_PD068,
  HY_PD069,
  HY_PD070_ANALOG_INPUT,
  HY_PD071_ANALOG_FILTERING_CONSTANT,
  HY_PD072_HIGHER_ANALOG_FREQUENCY,
  HY_PD073_LOWER_ANALOG_FREQUENCY,
  HY_PD074_BIAS_DIRECTION_AT_HIGHER_FREQUENCY,
  HY_PD075_BIAS_DIRECTION_AT_LOWER_FREQUENCY,
  HY_PD076_ANALOG_NEGATIVE_BIAS_REVERSE,
  HY_PD077_UP_DOWN_FUNCTION,
  HY_PD078_UP_DOWN_SPEED,
  HY_PD079,
  HY_PD080_PLC_OPERATION,
  HY_PD081_AUTO_PLC,
  HY_PD082_PLC_RUNNING_DIRECTION,
  HY_PD083,
  HY_PD084_PLC_RAMP_TIME,
  HY_PD085,
  HY_PD086_FREQUENCY_2,
  HY_PD087_FREQUENCY_3,
  HY_PD088_FREQUENCY_4,
  HY_PD089_FREQUENCY_5,
  HY_PD090_FREQUENCY_6,
  HY_PD091_FREQUENCY_7,
  HY_PD092_FREQUENCY_8,
  HY_PD093,
  HY_PD094,
  HY_PD095,
  HY_PD096,
  HY_PD097,
  HY_PD098,
  HY_PD099,
  HY_PD100,
  HY_PD101_TIMER_1,
  HY_PD102_TIMER_2,
  HY_PD103_TIMER_3,
  HY_PD104_TIMER_4,
  HY_PD105_TIMER_5,
  HY_PD106_TIMER_6,
  HY_PD107_TIMER_7,
  HY_PD108_TIMER_8,
  HY_PD109,
  HY_PD110,
  HY_PD111,
  HY_PD112,
  HY_PD113,
  HY_PD114,
  HY_PD115,
  HY_PD116,
  HY_PD117_AUTOPLC_MEMORY_FUNCTION,
  HY_PD118_OVER_VOLTAGE_STALL_PREVENTION,
  HY_PD119_STALL_PREVENTION_LEVEL_AT_RAMP_UP,
  HY_PD120_STALL_PREVENTION_LEVEL_AT_CONSTANT_SPEED,
  HY_PD121_DECEL_TIME_FOR_STALL_PREVENTION_AT_CONSTANT_SPEED,
  HY_PD122_STALL_PREVENTION_LEVEL_AT_DECELERATION,
  HY_PD123_OVER_TORQUE_DETECT_MODE,
  HY_PD124_OVER_TORQUE_DETECT_LEVEL,
  HY_PD125_OVER_TORQUE_DETECT_TIME,
  HY_PD126,
  HY_PD127,
  HY_PD128,
  HY_PD129,
  HY_PD130_NUMBER_OF_AUXILIARY_PUMP,
  HY_PD131_CONTINUOUS_RUNNING_TIME_OF_AUXILIARY_PUMPS,
  HY_PD132_INTERLOCKING_TIME_OF_AUXILIARY_PUMP,
  HY_PD133_HIGH_SPEED_RUNNING_TIME,
  HY_PD134_LOW_SPEED_RUNNING_TIME,
  HY_PD135_STOPPING_VOLTAGE_LEVEL,
  HY_PD136_LASTING_TIME_OF_STOPPING_VOLTAGE_LEVEL,
  HY_PD137_WAKEUP_VOLTAGE_LEVEL,
  HY_PD138_SLEEP_FREQUENCY,
  HY_PD139_LASTING_TIME_OF_SLEEP_FREQUENCY,
  HY_PD140,
  HY_PD141_RATED_MOTOR_VOLTAGE,
  HY_PD142_RATED_MOTOR_CURRENT,
  HY_PD143_MOTOR_POLE_NUMBER,
  HY_PD144_RATED_MOTOR_RPM,
  HY_PD145_AUTO_TORQUE_COMPENSATION,
  HY_PD146_MOTOR_NO_LOAD_CURRENT,
  HY_PD147_MOTOR_SLIP_COMPENSATION,
  HY_PD148,
  HY_PD149,
  HY_PD150_AUTO_VOLTAGE_REGULATION,
  HY_PD151_AUTO_ENERGY_SAVING,
  HY_PD152_FAULT_RESTART_TIME,
  HY_PD153_RESTART_AFTER_INSTANTANEOUS_STOP,
  HY_PD154_ALLOWABLE_POWER_BREAKDOWN_TIME,
  HY_PD155_NUMBER_OF_ABNORMAL_RESTART,
  HY_PD156_PROPORTIONAL_CONSTANT,
  HY_PD157_INTEGRAL_TIME,
  HY_PD158_DIFFERENTIAL_TIME,
  HY_PD159_TARGET_VALUE,
  HY_PD160_PID_TARGET_VALUE,
  HY_PD161_PID_UPPER_LIMIT,
  HY_PD162_PID_LOWER_LIMIT,
  HY_PD163_COMMUNICATION_ADDRESSES,
  HY_PD164_COMMUNICATION_BAUD_RATE,
  HY_PD165_COMMUNICATION_DATA_METHOD,
  HY_PD166,
  HY_PD167,
  HY_PD168,
  HY_PD169,
  HY_PD170_DISPLAY_ITEMS,
  HY_PD171_DISPLAY_ITEMS_OPEN,
  HY_PD172_FAULT_CLEAR,
  HY_PD173,
  HY_PD174_RATED_CURRENT_OF_INVERTER,
  HY_PD175_INVERTER_MODEL,
  HY_PD176_INVERTER_FREQUENCY_STANDARD,
  HY_PD177_FAULT_RECORD_1,
  HY_PD178_FAULT_RECORD_2,
  HY_PD179_FAULT_RECORD_3,
  HY_PD180_FAULT_RECORD_4,
  HY_PD181_SOFTWARE_VERSION,
  HY_PD182_MANUFACTURE_DATE,
  HY_PD183_SERIAL_NO,
} hy_addr_t;
