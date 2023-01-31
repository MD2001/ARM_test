/*****************************************/
/*        Author: Mohmaed diaa           */
/*        Version: 1.0                   */
/*        Date:30 jun 2023               */
/*****************************************/
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"

#include "RCC_INTERFACE.h"
#include "RCC_PRIVET.h"
#include "RCC_CONFIG.h"


void RCC_voidInitSysClock(void)
{
    #if RCC_CLOCK_TYPE  == RCC_HSE_CRYSTAL
        RCC_CR=0x00010000
        while(GET_BIT(RCC_CR,1)==17);         //stay until External crystal stable
    #elif RCC_CLOCK_TYPE  == RCC_HSE_RC
       RCC_CR=0x00050000                      //stay until RC external stable
        while(GET_BIT(RCC_CR,1)==17);
    #elif RCC_CLOCK_TYPE  == RCC_HSI    
        RCC_CR=0x00000081                     //Enable HSI +Termining =0
        while(GET_BIT(RCC_CR,1)==0);          //stay until HSI stable
    #elif RCC_CLOCK_TYPE  == RCC_PLL
        #if RCC_PLL_CLOCK_SOURC == RCC_PLL_IN_HSE

        #elif RCC_PLL_CLOCK_SOURC == RCC_PLL_IN_HSE_DIV_2

        #elif RCC_PLL_CLOCK_SOURC == RCC_PLL_IN_HSI_DIV_2
        
        #else 
        #error "wroing choice RCC_PLL_CLOCK SOURCE"
        #endif
    #else
        #error "wrroing choice RCC_CLOCK_TYPE"
    #endif
}


void RCC_voidEnableClock(u8 Copy_u8BusID,u8 Copy_u8PerID)
{
    if(Copy_u8PerID<=31)
    {
        switch(Copy_u8BusID)
        {
            case AHB  :SET_BIT(RCC_AHBENR,Copy_u8PerID); break;
            case AHB1 :SET_BIT(RCC_APB1ENR,Copy_u8PerID); break;
            case AHB2 :SET_BIT(RCC_APB2ENR,Copy_u8PerID); break;
            // some compiler may be make error if you left your defult empty
        }
    
    }
    else
    {
        /*Error register overflow*/
    }

}

void RCC_voidDisableClock(u8 Copy_u8BusID,u8 Copy_u8PerID)
{
    if(Copy_u8PerID<=31)
    {
        switch(Copy_u8BusID)
        {
            case AHB  :CLR_BIT(RCC_AHBENR,Copy_u8PerID); break;
            case AHB1 :CLR_BIT(RCC_APB1ENR,Copy_u8PerID); break;
            case AHB2 :CLR_BIT(RCC_APB2ENR,Copy_u8PerID); break;
            // some compiler may be make error if you left your defult empty
        }
    
    }
    else
    {
        /*Error register overflow*/
    }

}