/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "stdint.h"

#include "platform.h"

#include "debug.h"

int16_t debug[DEBUG16_VALUE_COUNT];
uint8_t debugMode;

#ifdef DEBUG_SECTION_TIMES
uint32_t sectionTimes[2][4];
#endif

const char * const debugModeNames[DEBUG_COUNT] = {
    "NONE",
    "CYCLETIME",
    "BATTERY",
    "GYRO",
    "ACCELEROMETER",
    "PIDLOOP",
    "NOTCH",
    "RC_INTERPOLATION",
    "ANGLERATE",
#ifdef USE_DSHOT
    "ESC_SENSOR",
#endif
    "SCHEDULER",
    "STACK",
    "ESC_SENSOR_RPM",
    "ESC_SENSOR_TMP",
    "ALTITUDE",
    "FFT",
    "FFT_TIME",
    "FFT_FREQ",
    "RX_FRSKY_SPI",
    "GYRO_RAW",
#ifdef USE_DUAL_GYRO
    "DUAL_GYRO",
    "DUAL_GYRO_RAW",
    "DUAL_GYRO_COMBINE",
    "DUAL_GYRO_DIFF",
#endif
#ifdef USE_MAX7456
    "MAX7456_SIGNAL",
    "MAX7456_SPICLOCK",
#endif
#ifdef USE_SERIAL_RX
    "SBUS",
    "FPORT",
#endif
#ifdef USE_RANGEFINDER
    "RANGEFINDER",
    "RANGEFINDER_QUALITY",
#endif
#ifdef USE_RANGEFINDER_TF
    "LIDAR_TF",
#endif
    "CORE_TEMP",
    "RUNAWAY_TAKEOFF",
};
