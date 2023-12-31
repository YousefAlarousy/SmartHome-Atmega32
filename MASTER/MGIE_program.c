/******************************************************/
/******************************************************/
/******************************************************/
/************* Author : YousefAlarousy ****************/
/************* Layer  : MCAL           ****************/
/************* Module : GIE            ****************/
/************* Version : 1.00          ****************/
/************* Date   : 8/8/2023       ****************/
/******************************************************/
/******************************************************/
/******************************************************/

#include "STD_TYPES.h"
#include "MACROS.h"
#include "MGIE_register.h".h"
#include "MGIE_interface.h"

void MGIE_voidEnable()
{
	SET_BIT(SREG,SREG_INT);
}
void MGIE_voidDisable()
{
	CLR_BIT(SREG,SREG_INT);
}

