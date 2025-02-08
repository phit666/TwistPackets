#pragma once

#include <vector>

struct _NEW_OPCODES_TWIST
{
	BYTE HeadCode; // Old Headcode
	BYTE C2S; // New Client to Server Headcode
	BYTE S2C; // New Server to Client Headcode

	std::vector<BYTE> SubH1; // Old Sub headcodes
	std::vector<BYTE> SubH2; // New Client to Server Sub headcodes
	std::vector<BYTE> SubH3; // New Server to Client Sub headcodes
};

BYTE ConvertC2S(unsigned char* data);
BYTE ConvertS2C(unsigned char* data);