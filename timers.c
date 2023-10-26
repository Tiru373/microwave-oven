#include "main.h"


void init_timer2(void)
{
    /* Setting the internal clock source */
    T2CKPS0 = 1;
    T2CKPS1 = 1;
    
    /* The timer interrupt is enabled */
    PR2 = 250;

    
    TMR2IE = 1;
    
    /* switching off times*/
    TMR2ON = OFF;
}