/*****************************************/
/*        Author: Mohmaed diaa           */
/*        Version: 1.0                   */
/*        Date:31 jun 2023               */
/*****************************************/

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

/*
Option:
    RCC_HSE_CRYSTAL
    RCC_HSE_RC
    RCC_HSI
    RCC_PLL
*/
#define RCC_CLOCK_TYPE      RCC_HSI

/*
NOTE : work only whem you choise RCC_CLOCK_TYPE as RCC_PLL 
NOTE: Do not make freq greater than 72 MHz
Option:
        RCC_PLL_IN_HSI_DIV_2
        RCC_PLL_IN_HSE_RC_DIV_2
        RCC_PLL_IN_HSE_CRYSTAL_DIV_2
        RCC_PLL_IN_HSE_RC
        RCC_PLL_IN_HSE_CRYSTAL
      
*/
#if RCC_CLOCK_TYPE == RCC_PLL
#define RCC_PLL_CLOCK_SOURC     RCC_PLL_IN_HSI_DIV_2

/*Options:from 2 to 16*/
#define RCC_PLL_IN_HSI_DIV_2     2

#endif


/*there is other config and prescallers*/

#endif 