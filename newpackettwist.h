#pragma once

#include <vector>

struct _NEW_OPCODES_TWIST
{
	BYTE HeadCode;	// 0
	BYTE C2S;	// 4
	BYTE S2C;	// 8

	std::vector<BYTE> SubH1;	// C
	std::vector<BYTE> SubH2;	// C
	std::vector<BYTE> SubH3;	// C
};

BYTE ConvertC2S(unsigned char* data);
BYTE ConvertS2C(unsigned char* data);