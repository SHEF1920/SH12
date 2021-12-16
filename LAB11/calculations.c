#include <math.h>
#include "circle.h"
#include "calculations.h"

struct Circle makeCircle(int Ox, int Oy, int Mx, int My)//создаем круг
{
    struct point O;
    O.x = Ox;
    O.y = Oy;

    struct point M;
    M.x = Mx;
    M.y = My;

    struct Circle theCircle;
    theCircle.O = O;
    theCircle.M = M;

    return theCircle;
}

float radius (int Ox, int Oy, int Mx, int My)//вычисляем радиус
{
    return sqrt(pow((Mx - Ox), 2) + pow((My - Oy), 2));
}

float areaOfCircle(float radius)//вычисляем площадь
{
    return M_PI * pow(radius, 2);
}

float circumference(float radius)//вычисляем длину окружности
{
    return 2 * M_PI * radius;
}
