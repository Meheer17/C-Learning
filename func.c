#include <stdio.h>

float perimeter(float);

float getArea(float radius)
{
    float area;
    area = radius * radius * 3.141;
    return area;
}
// We can also just `Declare` the function on the top and define the function below the main function.

int main()
{
    float area, radius;
    printf("Enter the radius of the Circle: ");
    scanf("%f", &radius);
    area = getArea(radius);
    printf("The area is %f and the perimeter is %f\n", area, perimeter(radius));
    return 0;
}

// Like this we have to declare and then define the function.
float perimeter(float radius)
{
    return 2 * 3.141 * radius;
}