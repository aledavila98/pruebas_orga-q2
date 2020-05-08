#include "screen.h"

void do_delay()
{
    for (volatile int i = 0; i < 10000; i++) {}    
}

int main() 
{
    uint16_t data = 0xcf00 | 'o';
    uint16_t *vgaptr = (uint16_t *)0xb8A0;
    *vgaptr = data;
    return 0;
}
