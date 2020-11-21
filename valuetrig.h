#ifndef __NB_COUNTER
#define __NB_COUNTER

#include "mbed.h"
#include "nworkbench.h"

class nBlock_Counter: public nBlockSimpleNode<1> {
public:
    nBlock_Counter(uint32_t const_value);
    void triggerInput(nBlocks_Message message);
	void endFrame(void);
   
private:
	uint32_t _val;   	
};

#endif