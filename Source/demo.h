//
// Created by Sean Cheung on 16/4/2.
//

#ifndef SOURCE_DEMO_H
#define SOURCE_DEMO_H

#endif //SOURCE_DEMO_H

typedef void (*debug_t) (const char* msg);
typedef void (*create_t) (const char* name);
static debug_t debug;
static create_t create;

float linear(float a, float b, float f);
float easeInQuad(float a, float b, float f);
float easeOutQuad(float a, float b, float f);
float easeInOutQuad(float a, float b, float f);