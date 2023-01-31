/*****************************************/
/*        Author: Mohmaed diaa           */
/*        Version: 1.0                   */
/*        Date:30 jun 2023               */
/*****************************************/

#ifndef RCC_PRIVET_H
#define RCC_PRIVET_H

/*Register definitions*/
//base address is 0x4002 1000

// chose the type of clock {HSI,HSE,PLL}
#define RCC_CR                   *((volatile u32*)0x40021000)
#define RCC_CFGR                 *((volatile u32*)0x40021004)

#define RCC_CIR                  *((volatile u32*)0x40021008)
#define RCC_APB2RSTR             *((volatile u32*)0x4002100C)
#define RCC_APB1RSTR             *((volatile u32*)0x40021010)
//Chose clock perfrele
#define RCC_AHBENR               *((volatile u32*)0x40021014)
#define RCC_APB2ENR              *((volatile u32*)0x40021018)
#define RCC_APB1ENR              *((volatile u32*)0x4002101C)

#define RCC_BDCR                 *((volatile u32*)0x40021020)
#define RCC_CSR                  *((volatile u32*)0x40021024)



/////////////
/*Buses names */
#define AHB     0
#define AHB1    1
#define AHB2    2

/*Clock types*/
#define RCC_HSE_CRYSTAL     0
#define RCC_HSE_RC          1
#define RCC_HSI             2
#define RCC_PLL             3

/*PLL sources*/
#define RCC_PLL_IN_HSI_DIV_2                0
#define RCC_PLL_IN_HSE_RC_DIV_2             1
#define RCC_PLL_IN_HSE_CRYSTAL_DIV_2        2
#define RCC_PLL_IN_HSE_RC                   3
#define RCC_PLL_IN_HSE_CRYSTAL              4


#endif 