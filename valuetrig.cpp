#include "counter.h"

nBlock_Counter::nBlock_Counter(uint32_t const_value){
	_val = const_value;
	return;
}

void nBlock_Counter::triggerInput(nBlocks_Message message){			
		output[0] = _val;
		available[0] = 1;	
}

void nBlock_Counter::endFrame(void) {

}
