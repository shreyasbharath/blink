#include "UnitConversion.h"

float UnitConversion::KilometresToMiles(float km) {
  float miles = 0.621371192f * (float)km;
  return miles;
}

float UnitConversion::MetresToMiles(float m) {
  return KilometresToMiles(m / 1000.0f);
}

float UnitConversion::MetresToKilometres(float m) { return (m / 1000.0f); }

int32_t UnitConversion::CelsiusToFahrenheit(int32_t temperature) {
  return (int32_t)(((float)temperature * 9.0f / 5.0f) + 32.0f);
}
