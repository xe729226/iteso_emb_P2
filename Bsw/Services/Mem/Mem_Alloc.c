#include "Mem_Alloc.h"

   /*Init internal variables*/
Mem_HandlerType MemControl=
{
    .MemStart = (uint8_t*)&_heap_mem_start,
    .MemEnd = (uint8_t*)&_heap_mem_end,
    .CurrAddr = (uint8_t*)&_heap_mem_start,
    .FreeBytes = 0x1000 
};

/*Memory Allocation Handler*/
Mem_ReturnType Mem_Alloc(Mem_SizeType Size){
  
  Mem_ReturnType ReturnAddres; 
  
  if(Size < MemControl.FreeBytes)
  {
    if( (Size % 4) != 0) //If is not aligned to 32 bit
    {
       ReturnAddres = MemControl.CurrAddr;
       MemControl.CurrAddr += Size + (4 - (Size % 4));  //Update current address
       MemControl.FreeBytes -= Size + (4 - (Size % 4)); //Update the amount of free bytes
       return ReturnAddres;
    }
    else   //is aligned to 32 bit
    {
       ReturnAddres = MemControl.CurrAddr;
       MemControl.CurrAddr += Size;
       MemControl.FreeBytes -= Size;
       return ReturnAddres;
    }
  }
  else
  {
    return NULL;
  }
  
}
