#ifndef CRC_H_
#define CRC_H_
#if COMPONENT_CRC

#include "../uCosmos/uCosmos.h"
#include "../_config/crc_config.h"

#if CRC_CONFIG_VERSION < 261116
	#error "The version of the configuration file stored in the repository is not supported. Please copy `crc/template/crc_config.h` to your `_config` folder"
#endif

namespace crc {
	uint16_t crc16(const uint8_t * data, uint16_t length);
}

#endif
#endif
