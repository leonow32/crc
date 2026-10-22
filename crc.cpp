#include "../_config/_config.h"
#if COMPONENT_CRC
#include "crc.h"

namespace crc {

uint16_t crc16(const uint8_t * data, uint16_t length) {
	uint16_t crc = CRC16_INIT;

	while(length--) {
		uint8_t byte = *data++;

		#if CRC16_REFLECT_IN
		for(uint8_t mask = 0b00000001; mask; mask <<= 1) {
		#else
		for(uint8_t mask = 0b10000000; mask; mask >>= 1) {
		#endif
			uint8_t bit = (byte & mask) ? 1 : 0;
			uint8_t msb = crc >> 15;

			crc <<= 1;
			
			if(bit != msb) {
				crc ^= CRC16_POLY;
			}
		}
	}

	#if CRC16_REFLECT_OUT
		uint16_t result = 0;
		for(uint8_t i=0; i<=15; i++) {
			if(crc & (1<<i)) {
				result |= (1<<(15-i));
			}
		}
	#else
		uint16_t result = crc;
	#endif

	return result ^ CRC16_XOR_OUT;
}

}
	
#endif
