#include "c3.h"
#include "windows.h"

#include "cheatkey.h"

typedef struct {
	unsigned int val[ CHEATKEY_LENGTH ];
} cheatkey_t, *LP_cheatkey_t;


cheatkey_t cheatkey_thisKey = {
0x968861B9, 0x37999141, 0x9CB98A8D, 0x50115FB6, 0x1A221DE7, 0x8B0AFEBF, 0xD302DFF6, 0xD92CF444, 0x8A8CBB7E, 0x70532E03,
0x87643D56, 0x4D117B0C, 0x192518E9, 0xAD280F46, 0x0EDEA0B5, 0x941101E8, 0x3D9051CF, 0x4678CD01, 0xFDB2465D, 0xD1BDD3F1,
0xABAEC31B, 0x8175D5ED, 0x2861ACD6, 0x69E77D7F, 0x589F0BF4, 0xE18FD504, 0xA4AC8DEA, 0x039ECD2D, 0x78C406C4, 0x2C78B97E,
0xC694E9A1, 0x8134D0D1, 0x82BED134, 0x6820AED4, 0x2459FB45, 0x0B3BD287, 0x296FC92D, 0xD9B921BF, 0x937D405E, 0x048361A6,
0x64F78BD9, 0x04B4BF39, 0x26C276B5, 0x121C4BC8, 0x66B7F49F, 0xAEC1767A, 0x34269954, 0x1A599AC6, 0xA5512129, 0xDCD272FB,
0x52EDE783, 0x40CA9EB8, 0xD6A56F60, 0xD3172175, 0x5497DDCC, 0xE940E2F9, 0xEED57B6D, 0x19022EE1, 0x4FE437F8, 0xBCCC351F,
0x224022B8, 0x71438879, 0x99D7F20E, 0x9CBFA106, 0xE78981EC, 0xE2CC5CB4, 0xC6AF4C5A, 0xAFAA76C5, 0xF291F5F1, 0xB0CE154D,
0xABEDC262, 0x595F40B6, 0x37771CF0, 0x60B9623C, 0x5E5410F1, 0x40EDCB72, 0xEC9ED152, 0xB73F2FBB, 0x33E43410, 0x48A625D1,
0x87A732BF, 0xBA50A941, 0xC0DD6A07, 0x981C9BED, 0xBB719C22, 0xAF1E3D89, 0xD9C12F5F, 0x931EB91F, 0x7E1FACA2, 0x1919998B,
0x935141E2, 0xDEBF4DFF, 0x051240AA, 0xBFF4A980, 0x448E9D99, 0x5F4F6467, 0xC5E973E1, 0xA59D9AE1, 0x80B97FCB, 0x3B5F4B70
};


BYTE *WINAPI cheatkey_get()
{
	return (BYTE*)cheatkey_thisKey.val;
}
