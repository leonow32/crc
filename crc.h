#ifndef CRC_H_
#define CRC_H_
#if COMPONENT_CRC

#include "../uCosmos/uCosmos.h"
#include "../_config/crc_config.h"

namespace crc {
	uint16_t crc16(const uint8_t * data, uint16_t length);
}

#endif
#endif
