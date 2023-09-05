/******************************************************/
/******************************************************/
/******************************************************/
/************* Author : YousefAlarousy ****************/
/************* Layer  : HAL            ****************/
/************* Module : KPD            ****************/
/************* Version : 1.00          ****************/
/************* Date   : 5/8/2023       ****************/
/******************************************************/
/******************************************************/
/******************************************************/
#ifndef HKPD_CONFIG_H_
#define HKPD_CONFIG_H_
/*******************************************************************************************************/
/*Choose Size of Keypad :
 	 	 	 	 	 	 _4*4
 	 	 	 	 	 	 _4*3
 	 	 	 	 	 	 ....
 */
#define COL_SIZE           4
#define ROW_SIZE           4

/*******************************************************************************************************/
/*Choose Column&Row Port of Keypad :
 	 	 	 	 	 	 _DIO_PORTA
 	 	 	 	 	 	 _DIO_PORTB
 	 	 	 	 	 	 _DIO_PORTC
 	 	 	 	 	 	 _DIO_PORTD
 */
#define KPD_COL_PORT       DIO_PORTD
#define KPD_ROW_PORT       DIO_PORTA

/*******************************************************************************************************/
/*Choose Column&Row Pins of Keypad :
 	 	 	 	 	 	 _DIO_PIN0
 	 	 	 	 	 	 _DIO_PIN1
 	 	 	 	 	 	 _DIO_PIN2
 	 	 	 	 	 	 _DIO_PIN3
                         _DIO_PIN4
                         _DIO_PIN5
                         _DIO_PIN6
                         _DIO_PIN7
 */
#define KPD_R0             DIO_PIN2
#define KPD_R1		  	   DIO_PIN3
#define KPD_R2		  	   DIO_PIN4
#define KPD_R3		  	   DIO_PIN5

#define KPD_C0		  	   DIO_PIN4
#define KPD_C1		  	   DIO_PIN5
#define KPD_C2		  	   DIO_PIN6
#define KPD_C3		  	   DIO_PIN7
/*******************************************************************************************************/
/*Draw The Matrix of Keypad :

 */

#define KPD_Arr {{7,8,9,'/'},\
				 {4,5,6,'*'},\
				 {1,2,3,'-'},\
				 {'#',0,'=','+'}}
/*******************************************************************************************************/


#endif /* HKPD_CONFIG_H_ */
