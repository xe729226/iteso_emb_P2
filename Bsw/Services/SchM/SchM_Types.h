/*******************************************************************************/
/**
\file       SchM_Types.h
\brief      Scheduler Type Definitions.
   \~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   \version       1.0
   \author        Francisco Martinez
   \description   Initial version of Task Type Definitios
   \date          20/08/2018
*/

#ifndef SCHM_TYPES
#define SCHM_TYPES

	/** Standard Types */
	#include "Std_Types.h"

	typedef  void  ( * SchM_CallbackType )( void );

	/* Task Scheduler Tasks IDs definitions */
	typedef enum  
	{   
		TASKS_1_MS,
		TASKS_2_MS_A,
		TASKS_2_MS_B,
		TASKS_10_MS,
		TASKS_50_MS,
		TASKS_100_MS,
		TASK_NULL,
	}SchMTasksIdType;

/*============================================================================*/
#endif /* SCHM_TYPES */
