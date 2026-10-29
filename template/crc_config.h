#ifndef CRC_CONFIG_H_
#define CRC_CONFIG_H_

#if PRODUCT_DEMO

	// CRC-16/MAXIM-DOW
	#define CRC16_POLY					0x8005
	#define CRC16_INIT					0x0000
	#define CRC16_XOR_OUT				0xFFFF
	#define CRC16_REFLECT_IN			true
	#define CRC16_REFLECT_OUT			true

	// CRC-16/ARC
//	#define CRC16_POLY					0x8005
//	#define CRC16_INIT					0x0000
//	#define CRC16_XOR_OUT				0x000
//	#define CRC16_REFLECT_IN			true
//	#define CRC16_REFLECT_OUT			true

	// CRC-16/KERMIT
//	#define CRC16_POLY					0x1021
//	#define CRC16_INIT					0x0000
//	#define CRC16_XOR_OUT				0x0000
//	#define CRC16_REFLECT_IN			true
//	#define CRC16_REFLECT_OUT			true

	// CRC-16/ISO-IEC-14443-3-A
//	#define CRC16_POLY					0x1021
//	#define CRC16_INIT					0xC6C6
//	#define CRC16_XOR_OUT				0x0000
//	#define CRC16_REFLECT_IN			true
//	#define CRC16_REFLECT_OUT			true

	// CRC-16/XMODEM
//	#define CRC16_POLY					0x1021
//	#define CRC16_INIT					0x0000
//	#define CRC16_XOR_OUT				0x0000
//	#define CRC16_REFLECT_IN			false
//	#define CRC16_REFLECT_OUT			false

	// CRC-16/RIELLO
//	#define CRC16_POLY					0x1021
//	#define CRC16_INIT					0xB2AA
//	#define CRC16_XOR_OUT				0x0000
//	#define CRC16_REFLECT_IN			true
//	#define CRC16_REFLECT_OUT			true

	#define CRC_USE_DEMO_COMMANDS 		true
	#define CRC_CONFIG_DONE
#endif

// ========================================
// Error handling
// ========================================

#ifndef CRC_CONFIG_DONE
	#error "Missing config"
#endif

#endif /* CRC_CONFIG_H_ */
