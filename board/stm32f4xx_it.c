//-----------------------------------------------------------------------------
/*

Interrupt Handlers

*/
//-----------------------------------------------------------------------------

#include "stm32f4xx_it.h"
#include "stm32f4xx_hal.h"

//-----------------------------------------------------------------------------

void NMI_Handler(void)
{
}

void HardFault_Handler(void)
{
    while (1);
}

void MemManage_Handler(void)
{
    while (1);
}

void BusFault_Handler(void)
{
    while (1);
}

void UsageFault_Handler(void)
{
    while (1);
}

void SVC_Handler(void)
{
}

void DebugMon_Handler(void)
{
}

void PendSV_Handler(void)
{
}

void SysTick_Handler(void)
{
    HAL_IncTick();
}

//-----------------------------------------------------------------------------
// STM32F4xx Peripherals Interrupt Handlers

extern PCD_HandleTypeDef hpcd;
extern TIM_HandleTypeDef htim3;

void OTG_FS_IRQHandler(void)
{
    HAL_PCD_IRQHandler(&hpcd);
}

void TIM3_IRQHandler(void)
{
    HAL_TIM_IRQHandler(&htim3);
}

//-----------------------------------------------------------------------------
