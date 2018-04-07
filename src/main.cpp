#include <mbed.h>
#include <rtos.h>
#include <mbed_events.h>
#include "components.h"

Serial pc(USBTX, USBRX);
Thread worker;
EventQueue queue;
AssignmentBoard board;

LED red(board.K64F_RED_LED);

void flash_red(void)
{
    while(1)
    {
        red.on();
        wait(0.5);
        red.off();
        wait(0.5);
    }
}
int main() {

    // put your setup code here, to run once:
    worker.start( flash_red );

    while(1) {
        // put your main code here, to run repeatedly:
    }
}
