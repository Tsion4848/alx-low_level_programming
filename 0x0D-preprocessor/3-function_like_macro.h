#ifndef file
#define file
#define ABS(x)

#if x >= 0
#undef ABS(x)
#define ABS(x) X
#elif x < 0
#undef ABS(X)
#define ABS(X) (-X)
#endif

