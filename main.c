#include <stdio.h>

void displayMenu() 
{
    printf("Welcome to TempConversion!\n");
    printf("1. Convert from Celsius to Fahrenheit\n");
    printf("2. Convert from Fahrenheit to Celsius\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

void celsiusToFahrenheit() 
{
    double temp_c, temp_f;
    printf("Enter temperature (°C): ");
    scanf("%lf", &temp_c);

    temp_f = (temp_c * 9 / 5) + 32;
    printf("Fahrenheit (approx.): %.2f\n", temp_f);

    if (temp_c > 27) 
    {
        printf("Make sure to drink adequate amounts of water and dress comfortably.\n");
    } 
    else if (temp_c < 18) 
    {
        printf("Today will be cold, so keep yourself warm.\n");
    }
}

void fahrenheitToCelsius() 
{
    double temp_f, temp_c;
    
    printf("Enter temperature (°F): ");
    scanf("%lf", &temp_f);
    
    temp_c = (temp_f - 32) * 5 / 9;
    
    printf("Celsius (approx.): %.2f\n", temp_c);
    if (temp_f > 80) 
    {
        printf("Make sure to drink adequate amounts of water and dress comfortably.\n");
    } 
    else if (temp_f < 65) 
    {
        printf("Today will be cold, so keep yourself warm.\n");
    }
}

int main() {
    int choice;
    do 
    {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                celsiusToFahrenheit();
                break;
            case 2:
                fahrenheitToCelsius();
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
        printf("\n");
    } while (choice != 0);
    return 0;
}
