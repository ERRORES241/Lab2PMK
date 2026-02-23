#include "project.h"
int main(void)
{
CyGlobalIntEnable; /* Enable global interrupts. */
for(;;)
{
LED_Red_Write(0);
LED_Blue_Write(0);
CyDelay(500);
LED_Red_Write(1);
LED_Blue_Write(1);
CyDelay(500);
LED_Blue_Write(0);
LED_Green_Write(0);
CyDelay(500);
LED_Blue_Write(1);
LED_Green_Write(1);
CyDelay(500);
}
}