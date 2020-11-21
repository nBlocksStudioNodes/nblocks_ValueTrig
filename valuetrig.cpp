#include "ValueTrig.h"

nBlock_ValueTrig::nBlock_ValueTrig(uint32_t const_value){

	constant_number = const_value;
	return;
}

void nBlock_ValueTrig::triggerInput(nBlocks_Message message){	
	triggered_flag = 1;	
	}
}

void nBlock_ValueTrig::endFrame(void) {	
	if(triggered_flag == 1){	
		triggered_flag = 0;
		output[0] = constant_number;
		available[0] = 1;
	}
}

