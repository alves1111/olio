#include "rectangle.h"

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

double Rectangle::getArea() const
{
    return width * height;
}

double Rectangle::getCircum() const
{
    return 2 * (width + height);
}
