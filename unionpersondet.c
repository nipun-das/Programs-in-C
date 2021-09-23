//Implement a program to create a Union with variables Name, House Name, City Name, State and Pin code each with a length of C_SIZE (user defined constant). Then, read and display the address of a person using a variable of the union

#include <stdio.h>
#define C_SIZE 30
union person_details
{
    char Name[C_SIZE];
    char HouseName[C_SIZE];
    char CityName[C_SIZE];
    char State[C_SIZE];
    long int PinCode;

} x;
void main()
{
    printf("Enter the Name : ");
    scanf("%s", x.Name);
    printf("\nName: %s", x.Name);
    printf("\nEnter the House Name : ");
    scanf("%s", x.HouseName);
    printf("\nHouse Name : %s", x.HouseName);
    printf("\nEnter the City Name :  ");
    scanf("%s", x.CityName);
    printf("\nCity Name : %s", x.CityName);
    printf("\nEnter the State :  ");
    scanf("%s", x.State);
    printf("\nState : %s", x.State);
    printf("\nEnter the Pincode :  ");
    scanf("%ld", &x.PinCode);
    printf("\nPinCode : %ld", x.PinCode);
}