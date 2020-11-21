#ifndef __NB_VALUETRIG
#define __NB_VALUETRIG

#include "mbed.h"
#include "nworkbench.h"

class nBlock_ValueTrig: public nBlockSimpleNode<1> {
public:
    nBlock_ValueTrig(uint32_t const_value);
    void triggerInput(nBlocks_Message message);
	void endFrame(void);
   
private:
	uint32_t _val;   	
};

#endif