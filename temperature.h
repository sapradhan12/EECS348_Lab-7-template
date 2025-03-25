#ifndef __TEMPERATURE_H__
#define __TEMPERATURE_H__

float celsius_to_fahrenheit(float celsius);
float fahrenheit_to_celsius(float fahrenheit);
float celsius_to_kelvin(float celsius);
float kelvin_to_celsius(float kelvin);
float fahrenheit_to_kelvin(float fahrenheit);
float kelvin_to_fahrenheit(float kelvin);

const char* categorize_temperature(float celsius);
const char* weather_advisory(float celsius);

#endif