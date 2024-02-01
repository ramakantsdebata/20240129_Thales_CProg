#include <stdio.h>
#include <string.h>

struct Point
{
    int x;
    int y;
};

union Variant
{
    int intValue;
    float floatValue;
    char stringValue[20];
};

enum Color
{
    RED, 
    GREEN,
    BLUE
};


int main()
{
    struct Point point1 = {3, 5};
    struct Point *pStruct = &point1;

    printf("x = %d, y = %d\n", point1.x, point1.y);
    printf("x = %d, y = %d\n", pStruct->x, (*pStruct).y);


    union Variant var;
    var.intValue = 10;
    printf("Variant [%lu byte] [%lu byte] integer value: %d\n", sizeof(var), sizeof(var.intValue), var.intValue);
    
    var.floatValue = 53.5;
    printf("Variant [%lu byte] [%lu byte] float value: %f\n", sizeof(var), sizeof(var.floatValue), var.floatValue);
    printf("Variant [%lu byte] [%lu byte] integer value: %d\n", sizeof(var), sizeof(var.intValue), var.intValue);
    
    strcpy(var.stringValue, "Test String");
    printf("Variant [%lu byte] [%lu byte] string value: %s\n", sizeof(var), sizeof(var.stringValue), var.stringValue);


    enum Color color = RED;

    printf("Color: ");
    switch (color)
    {
        case RED:
            printf("RED\n");
            break;
        case GREEN:
            printf("GREEN\n");
            break;
        case BLUE:
            printf("BLUE\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    return 0;
}