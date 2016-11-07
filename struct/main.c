#include <stdio.h>
#include <stdlib.h>

struct person
{
    int sn;
    char name[20];
    int phone;
    char dob[10];
};

int main()
{
    int i, n;
    printf("\tRECORD OF STUDENTS USING STRUCTURES\n");
    printf("How many Entries you want?");
    scanf("%d", &n);

    struct person p[n];

    for(i=0; i<n; i++)
    {
    p[i].sn = i+1;
    printf("Enter Name: ");
    scanf("%s", &p[i].name);
    printf("Enter RoomNo.: ");
    scanf("%d", &p[i].phone);
    printf("Enter DOB: ");
    scanf("%s", &p[i].dob);
    }

    printf("\n\nSerialNo.\tName\tPhone\tDOB");
    for(i=0; i<n; i++){
    printf("\n%d\t\t%s\t%d\t%s\n", p[i].sn, p[i].name, p[i].phone, p[i].dob);
    }
    return 0;
}
