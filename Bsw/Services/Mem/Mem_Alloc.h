#ifndef __MEM_ALLOC_H        /*prevent duplicated includes*/
#define __MEM_ALLOC_H

#include "Mem_AllocTypes.h"

extern uint32_t _heap_mem_start;
extern uint32_t _heap_mem_end;



/*Memory Allocation Handler*/

Mem_ReturnType Mem_Alloc(Mem_SizeType Size);



#endif