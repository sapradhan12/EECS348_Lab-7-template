#include <stdio.h>
#include "temperature.h"

int main() {
    float temp;
    int input_scale;
    int output_scale;

    while (1) {
        printf("Enter the temperature: ");
        if (scanf("%f", &temp) != 1) {
            printf("Invalid temperature input. Please enter a valid number.\n");
            while(getchar() != '\n');
            continue;
        }
        
        printf("Choose the current scale (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
        if (scanf("%d", &input_scale) != 1) {
            printf("Invalid input for scale. Please enter 1, 2, or 3.\n\n\n");
            while(getchar() != '\n');
            continue;
        }
        if (input_scale < 1 || input_scale > 3) {
            printf("Invalid scale selection. Please choose 1, 2, or 3.\n\n\n");
            continue;
        }
        
        printf("Convert to (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
        if (scanf("%d", &output_scale) != 1) {
            printf("Invalid conversion choice. Please enter 1, 2, or 3.\n\n\n");
            while(getchar() != '\n');
            continue;
        }
        printf("\n");
        if (output_scale < 1 || output_scale > 3) {
            printf("Invalid conversion selection. Please choose 1, 2, or 3.\n\n\n");
            continue;
        }

        if (input_scale == 1) {
            if (output_scale == 1) {
                printf("You need to convert to a different scale than the input scale. Try again.\n\n\n");
                continue;
            } else if (output_scale == 2) {
                printf("Converted temperature: %.2f degrees F\n", celsius_to_fahrenheit(temp));
                printf("Temperature category: %s\n", categorize_temperature(temp));
                printf("Weather advisory: %s\n\n\n", weather_advisory(temp));
            } else if (output_scale == 3) {
                printf("Converted temperature: %.2fK\n", celsius_to_kelvin(temp));
                printf("Temperature category: %s\n", categorize_temperature(temp));
                printf("Weather advisory: %s\n\n\n", weather_advisory(temp));
            }
        } else if (input_scale == 2) {
            if (output_scale == 1) {
                printf("Converted temperature: %.2f degrees C\n", fahrenheit_to_celsius(temp));
                printf("Temperature category: %s\n", categorize_temperature(fahrenheit_to_celsius(temp)));
                printf("Weather advisory: %s\n\n\n", weather_advisory(fahrenheit_to_celsius(temp)));
            } else if (output_scale == 2) {
                printf("You need to convert to a different scale than the input scale. Try again.\n\n\n");
                continue;
            } else if (output_scale == 3) {
                printf("Converted temperature: %.2fK\n", fahrenheit_to_kelvin(temp));
                printf("Temperature category: %s\n", categorize_temperature(fahrenheit_to_celsius(temp)));
                printf("Weather advisory: %s\n\n\n", weather_advisory(fahrenheit_to_celsius(temp)));
            }
        } else if (input_scale == 3) {
            if (temp < 0) {
                printf("Your input temperature must be nonnegative since Kelvin temperatures cannot be negative. Try again.\n\n\n");
                continue;
            } else {
                if (output_scale == 1) {
                    printf("Converted temperature: %.2f degrees C\n", kelvin_to_celsius(temp));
                    printf("Temperature category: %s\n", categorize_temperature(kelvin_to_celsius(temp)));
                    printf("Weather advisory: %s\n\n\n", weather_advisory(kelvin_to_celsius(temp)));
                } else if (output_scale == 2) {
                    printf("Converted temperature: %.2f degrees F\n", kelvin_to_fahrenheit(temp));
                    printf("Temperature category: %s\n", categorize_temperature(kelvin_to_celsius(temp)));
                    printf("Weather advisory: %s\n\n\n", weather_advisory(kelvin_to_celsius(temp)));
                } else if (output_scale == 3) {
                    printf("You need to convert to a different scale than the input scale. Try again.\n\n\n");
                    continue;
                }
            }
        }
    }
}
