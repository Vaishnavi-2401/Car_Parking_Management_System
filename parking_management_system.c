#include<stdio.h>
#include<string.h>

#define MAX_PARKING_SIZE 5
#define MAX_PLATE_LENGTH 20

char parking[MAX_PARKING_SIZE][MAX_PLATE_LENGTH];
int count = 0;


//Function to park a car
void park_car() 
{
    if(count < MAX_PARKING_SIZE) 
    {
        printf("Enter Car Number Plate : ");
        scanf("%s", parking[count]);

        count++;

        printf("Car Parked successfully!\n");
    }
    else 
    {
        printf("Parking is Full!\n");
    }
}


int main() 
{
    int choice;

    do 
    {
        printf("\n------ Car Parking Management System ------\n\n");
        printf("1. Park a car\n");
        printf("2. Remove a car\n");
        printf("3. View parked cars\n");
        printf("4. Exit\n");

        printf("Enter Your Choice : ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1 :
                park_car();
                break;

            case 2 :
                remove_car();
                break;

            case 3 :
                view_cars();
                break;

            case 4 :
                printf("Exit...\n");
                break;

            default :
                printf("Invalid choice! Try again!\n");
        }

    } while(choice != 4);

    return 0;
}