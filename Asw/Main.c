/****************************************************************************************************/
/**
  \mainpage
  \n 
  \brief        Main application (main module)
  \author       Abraham Tezmol Otero, M.S.E.E
  \project      Tau 
  \version      1.0
  \date         12/Jun/2016
   
  Program compiled with  WinIDEA Open Build 9.12.256 (54401), tested on Atmel SAMV71 Xplained Ultra
*/
/****************************************************************************************************/


/*~~~~~~  Headers ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

/** Main group of includes for board definitions, chip definitions and type definitions */
#include    "Std_Types.h"
/** Task scheduler definitions */
#include    "SchM.h"
/** LED control definitions */ 
#include    "Led_Ctrl.h"
/** Watchdog control function prototypes definitions */
#include    "Wdg.h"
/** Dynamic memory allocation*/
#include "Mem_Alloc.h"


/*~~~~~~  Local definitions ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

/*~~~~~~  Global variables ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/


/*~~~~~~  Local functions ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

/*----------------------------------------------------------------------------
 *        Exported functions
 *----------------------------------------------------------------------------*/
/**
 *  \brief getting-started Application entry point.
 *
 *  \return Unused (ANSI-C compatibility).
 */
uint8_t *a,*b;
uint16_t *c,*d, counter = 0;
uint8_t *e,*f;

extern Mem_HandlerType MemControl;
extern int main( void )
{
	/* Disable watchdog */
	Wdg_Disable();
	printf( "\n\r-- Scheduler Project %s --\n\r", SOFTPACK_VERSION ) ;
	printf( "-- %s\n\r", BOARD_NAME ) ;
	printf( "-- Compiled: %s %s With %s --\n\r", __DATE__, __TIME__ , COMPILER_NAME);
	/* Enable I and D cache */
	SCB_EnableICache();
	/* SCB_EnableDCache(); */
	/* Configure LEDs */
	printf( "-- Led Control --\n\r" ) ;
	LedCtrl_Configure(); 
  
	/*Dynamic memory allocation */
  a = (uint8_t*)Mem_Alloc(sizeof(uint8_t));    
  b = (uint8_t*)Mem_Alloc(sizeof(uint8_t));
  c = (uint16_t*)Mem_Alloc(sizeof(uint16_t));
  d = (uint16_t*)Mem_Alloc(sizeof(uint16_t));
  e = (uint8_t*)Mem_Alloc(10);
  f = (uint8_t*)Mem_Alloc(sizeof(uint8_t));
  
  *a = 1;
  *b = 2;
  *c = 3;
  *d = 4;
  *e = 5;
  *f = 6;
  
  /* Scheduler Inititalization */
  /* */
	printf( "-- Scheduler Initialization --\n\r" ) ;
	SchM_Init();
	
	/* Should never reach this code */
	for(;;)
    {
		printf( "-- Unexpected Error at Scheduler Initialization --\n\r" ) ;
	}
}
