#include "main.h"
#include "System.h"
#include "LED.h"
#include "Timer.h"

#ifndef TEST
int main(void)
{
    return AppMain();
}
#endif

int AppMain(void)
{
    LED_Init();
    Timer_Init();

    while(!System_AbortRequested())
    {
        if (Timer_ToggleRequested())
        {
            LED_Toggle();
        }
    }

    return 0;
}
