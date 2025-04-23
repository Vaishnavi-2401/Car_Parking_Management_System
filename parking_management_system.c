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


//Function to remove a car
void remove_car() 
{
    if(count == 0) 
    {
        printf("No Cars to Remove!\n");

        return;
    }

    char plate[MAX_PLATE_LENGTH];

    printf("Enter Number Plate of the Car to Remove : ");
    scanf("%s", plate);

    int found = 0;
    
    for(int i = 0; i < count; i++) 
    {
        if(strcmp(parking[i], plate) == 0) 
        {
            found = 1;
    
            for(int j = i; j < count - 1; j++) 
            {
                strcpy(parking[j], parking[j + 1]);
            }

            count--;

            printf("Car Removed Successfully!\n");

            break;
        }
    }

    if(!found) 
    {
        printf("Car Not Found!\n");
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