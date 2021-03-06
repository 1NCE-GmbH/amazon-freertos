/*******************************************************************************
  USART Peripheral Library Template Implementation

  File Name:
    usart_RunInSleepMode_Default.h

  Summary:
    USART PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : RunInSleepMode
    and its Variant : Default
    For following APIs :
        PLIB_USART_ExistsRunInSleepMode
        PLIB_USART_RunInSleepModeEnable
        PLIB_USART_RunInSleepModeDisable
        PLIB_USART_RunInSleepModeIsEnabled

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _USART_RUNINSLEEPMODE_DEFAULT_H
#define _USART_RUNINSLEEPMODE_DEFAULT_H

#include "usart_registers.h"

//******************************************************************************
/* Function :  USART_ExistsRunInSleepMode_Default

  Summary:
    Implements Default variant of PLIB_USART_ExistsRunInSleepMode

  Description:
    This template implements the Default variant of the PLIB_USART_ExistsRunInSleepMode function.
*/

#define PLIB_USART_ExistsRunInSleepMode PLIB_USART_ExistsRunInSleepMode
PLIB_TEMPLATE bool USART_ExistsRunInSleepMode_Default( USART_MODULE_ID index )
{
    return true;
}


//******************************************************************************
/* Function :  USART_RunInSleepModeEnable_Default

  Summary:
    Implements Default variant of PLIB_USART_RunInSleepModeEnable 

  Description:
    This template implements the Default variant of the PLIB_USART_RunInSleepModeEnable function.
*/

PLIB_TEMPLATE void USART_RunInSleepModeEnable_Default( USART_MODULE_ID index )
{
    usart_registers_t volatile * usart = ((usart_registers_t *)(index));
    usart->UxMODESET = UxMODE_SLPEN_MASK;
}


//******************************************************************************
/* Function :  USART_RunInSleepModeDisable_Default

  Summary:
    Implements Default variant of PLIB_USART_RunInSleepModeDisable 

  Description:
    This template implements the Default variant of the PLIB_USART_RunInSleepModeDisable function.
*/

PLIB_TEMPLATE void USART_RunInSleepModeDisable_Default( USART_MODULE_ID index )
{
    usart_registers_t volatile * usart = ((usart_registers_t *)(index));
    usart->UxMODECLR = UxMODE_SLPEN_MASK;
}


//******************************************************************************
/* Function :  USART_RunInSleepModeIsEnabled_Default

  Summary:
    Implements Default variant of PLIB_USART_RunInSleepModeIsEnabled 

  Description:
    This template implements the Default variant of the PLIB_USART_RunInSleepModeIsEnabled function.
*/

PLIB_TEMPLATE bool USART_RunInSleepModeIsEnabled_Default( USART_MODULE_ID index )
{
    usart_registers_t volatile * usart = ((usart_registers_t *)(index));
    return (bool)usart->UxMODE.SLPEN;
}


#endif /*_USART_RUNINSLEEPMODE_DEFAULT_H*/

/******************************************************************************
 End of File
*/

