#include "../_config/_config.h"
#if COMPONENT_CRC
#include "crc_demo.h"
#if CRC_USE_DEMO_COMMANDS

namespace crc {

void crc16_cmd(int argc, char * argv[]) {
	if(argc == 1) {
		printf("data[hexstr]\n");
	}

	uint8_t data[128] = {0};
	size_t length = 0;

	if(parse_hex_string(argv[1], data, &length, sizeof(data))) return;

	uint16_t value = crc16(data, length);

	printf("Len: %u \n", length);
	printf("CRC: %04X \n", value);
}

}

#endif
#endif
