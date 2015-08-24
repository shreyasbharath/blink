#ifndef UNIT_CONVERSION_H_
#define UNIT_CONVERSION_H_

#include <cstdint>

namespace UnitConversion {
float KilometresToMiles(float km);
float MetresToMiles(float m);
float MetresToKilometres(float m);
int32_t CelsiusToFahrenheit(int32_t temperature);
}

#endif // UNIT_CONVERSION_H_
