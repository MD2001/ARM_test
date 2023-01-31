/*****************************************/
/*        Author: Mohmaed diaa           */
/*        Version: 1.0                   */
/*        Date:30 jun 2023               */
/*****************************************/

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H
void RCC_voidInitSysClock(void);
void RCC_voidEnableClock(u8 Copy_u8BusID,u8 Copy_u8PerID);
void RCC_voidDisableClock(u8 Copy_u8BusID,u8 Copy_u8PerID);

#endif 