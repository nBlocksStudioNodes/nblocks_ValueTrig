#include "valuetrig.h"

nBlock_ValueTrig::nBlock_ValueTrig(uint32_t const_value){
	_val = const_value;
	return;
}

void nBlock_ValueTrig::triggerInput(nBlocks_Message message){			
		output[0] = _val;
		available[0] = 1;	
}

void nBlock_ValueTrig::endFrame(void) {

}
