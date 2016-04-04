//
// Created by Sean Cheung on 16/4/2.
//

#include "demo.h"
#include <math.h>

void registerDebug(debug_t callback)
{
    debug = callback;
}

void registerCreate(create_t callback)
{
    create = callback;
}

float linear(float a, float b, float f)
{
    (*debug)("linear");
    (*create)("linear");
    return a + f * (b - a);
}

float easeInQuad(float a, float b, float f)
{
    (*debug)("easeInQuad");
    (*create)("easeInQuad");
    b -= a;
    return b * powf(f, 2) + a;
}

float easeOutQuad(float a, float b, float f)
{
    (*debug)("easeOutQuad");
    (*create)("easeOutQuad");
    b -= a;
    return - b * f * (f - 2) + a;
}

float easeInOutQuad(float a, float b, float f)
{
    (*debug)("easeInOutQuad");
    (*create)("easeInOutQuad");
    f *= 2;
    b -= a;
    if(f < 1) return b / 2 * powf(f, 2) + a;
    f --;
    return  -b / 2 *(f * (f - 2) - 1) + a;
}