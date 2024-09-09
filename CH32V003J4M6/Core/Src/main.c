#include "main.h"

int main(void) {
    RVMSIS_RCC_SystemClock_48MHz();
    RVMSIS_SysTick_Timer_init();
    RVMSIS_TIM1_init();
    RVMSIS_TIM1_PWM_CHANNEL2_init();
    TIM1->CH2CVR = 1000; //§¥§Ý§Ú§ß§ß§í§Û §Ú§Þ§á§å§Ý§î§ã §ß§Ñ 1 §ã§Ö§Ü§å§ß§Õ§å
    Delay_ms(1000);
    TIM1->CH2CVR = 400; //§°§Õ§ß§à§â§à§Õ§ß§í§Û §º§ª§® §Õ§Ý§ñ §å§Õ§Ö§â§Ø§Ñ§ß§Ú§ñ

    while(1) {

    }
}
