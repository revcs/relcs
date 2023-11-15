#pragma once

#include "Building.h"

class CTreadable : public CBuilding
{
public:
	static void *operator new(size_t) throw();
	static void operator delete(void*, size_t) throw();

	int16 m_nodeIndices[2][12];	// first car, then ped

	bool GetIsATreadable(void) { return true; }
};

VALIDATE_SIZE(CTreadable, 0x94);

