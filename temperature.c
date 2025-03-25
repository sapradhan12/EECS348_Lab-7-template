#include <stdio.h>
#include "temperature.h"

float celsius_to_fahrenheit(float celsius) {
    return (9.0 / 5.0) * celsius + 32;
}

float fahrenheit_to_celsius(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

float celsius_to_kelvin(float celsius) {
    return celsius + 273.15;
}

float kelvin_to_celsius(float kelvin) {
    return kelvin - 273.15;
}

float fahrenheit_to_kelvin(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32) + 273.15;
}

float kelvin_to_fahrenheit(float kelvin) {
    return (9.0 / 5.0) * (kelvin - 273.15) + 32;
}

const char* categorize_temperature(float celsius) {
    if (celsius < 0) {
        return "Freezing";
    } else if (celsius >= 0 && celsius < 10) {
        return "Cold";
    } else if (celsius >= 10 && celsius < 25) {
        return "Comfortable";
    } else if (celsius >= 25 && celsius < 35) {
        return "Hot";
    } else if (celsius >= 35) {
        return "Extreme Heat";
    }
}

const char* weather_advisory(float celsius) {
    if (celsius < 0) {
        return "Stay inside because it's too cold.";
    } else if (celsius >= 0 && celsius < 10) {
        return "Wear a jacket.";
    } else if (celsius >= 10 && celsius < 25) {
        return "You should feel comfortable.";
    } else if (celsius >= 25 && celsius < 35) {
        return "Wear sunscreen.";
    } else if (celsius >= 35) {
        return "Stay inside because it's too hot.";
    }
}