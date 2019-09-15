#ifndef MEM_TYPES
#define MEM_TYPES

/** Standard Types */
#include "Std_Types.h"

typedef void* Mem_ReturnType;
typedef uint16_t Mem_SizeType;

typedef struct{
  uint8_t* MemStart;
  uint8_t* MemEnd;
  uint8_t* CurrAddr;
  uint32_t FreeBytes;
}Mem_HandlerType;

#endif