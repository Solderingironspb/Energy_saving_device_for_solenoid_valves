#include "main.h"

int main(void) {
    RVMSIS_RCC_SystemClock_48MHz();
    RVMSIS_SysTick_Timer_init();
    RVMSIS_TIM1_init();
    RVMSIS_TIM1_PWM_CHANNEL2_init();
    TIM1->CH2CVR = 1000; //���ݧڧߧߧ�� �ڧާ��ݧ�� �ߧ� 1 ��֧ܧ�ߧէ�
    Delay_ms(1000);
    TIM1->CH2CVR = 400; //���էߧ���էߧ�� ������ �էݧ� ��է֧�اѧߧڧ�

    while(1) {

    }
}
