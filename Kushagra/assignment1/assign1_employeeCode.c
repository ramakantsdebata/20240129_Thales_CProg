#include <stdio.h>
#include <string.h>

int main()
{
    int employeeID = 0, deptNo = 0;
    char designationCode;
    char deptName[20] = "", designation[20] = "";

    printf("Enter ID of the employee:");
    scanf("%d", &employeeID);

    printf("Enter department number of the employee:");
    scanf("%d", &deptNo);

    printf("Enter designationCode of the employee:");
    scanf(" %c", &designationCode);

    switch (deptNo)
    {
    case 10:
        strcpy(deptName, "'Purchase'");
        break;
    case 20:
        strcpy(deptName, "'Sales'");
        break;
    case 30:
        strcpy(deptName, "'Production'");
        break;
    case 40:
        strcpy(deptName, "'Marketing'");
        break;
    case 50:
        strcpy(deptName, "'Accounts'");
        break;
    default:
        printf("Not a valid deptNumber");
    }

    switch ( designationCode )
    {
        case 'M':
            strcpy(designation, "'Manager'");
            break;
        case 'S':
            strcpy(designation, "'SuperVisor'");
            break;
        case 'A':
            strcpy(designation, "'Analyst'");
            break;
        case 's':
            strcpy(designation, "'Sales Person'");
            break;
        case 'a':
            strcpy(designation, "'Accountant'");
            break;
    }

    if(designationCode)
    // Employee with Emp_ID 101 works in “Purchase” department as a “Manager”.

    printf("Employee with Emp_ID %d works in %s department as a %s", employeeID, deptName, designation);

    return 0;
}