#include<stdio.h>
#include<string.h>

#define MAX_PARKING_SIZE 5
#define MAX_PLATE_LENGTH 20

//Function to display menu
void show_menu()
{
    printf("\n------ Car Parking Management System ------\n");

    printf("1. Park a car\n");
    printf("2. Remove a car\n");
    printf("3. View parked cars\n");
    printf("4. Exit\n");

}