#include <stdarg.h>
/*Made by ExedNetic*/
#define Xor(...) XOr(sizeof((int[]){__VA_ARGS__}) / sizeof(int), __VA_ARGS__)

int XOr(int num, ...)
{
va_list args;
va_start(args, num);

int result = 0;

for(int i = 0; i < num; i++)
{
    result ^= va_arg(args, int);
}

va_end(args);

return result;

}
