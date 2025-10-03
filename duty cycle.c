#include <stdio.h>
int main()
{
    int duty_cycle;
    int period;
    int i;

    printf("Enter the duty cycle: ");
    scanf("%d", &duty_cycle);
    printf("Enter the period: ");
    scanf("%d", &period);

    printf("PWM Simulation:\n");
    for (i = 0; i < period; i++)
 {
        if (i < duty_cycle) {
            printf("1"); // HIGH (ON)
        } else {
            printf("0"); // LOW (OFF)
        }
    }

    return 0;
}
