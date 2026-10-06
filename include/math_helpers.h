#ifndef RAGEWARS_MATH_HELPERS_H
#define RAGEWARS_MATH_HELPERS_H

#define RW_CLAMP(value, low, high) ((value) < (low) ? (low) : (value) > (high) ? (high) : (value))
#define RW_MIN(a, b) ((a) > (b) ? (b) : (a))

#endif
