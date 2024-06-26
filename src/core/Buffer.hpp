#pragma once
#include "Color.hpp"

static Color (*BufferDataA)[1024] = new Color[1024][1024];
static Color (*BufferDataB)[1024] = new Color[1024][1024];

void SetBufferData(Color (*BufferData)[1024]){
	BufferDataA = BufferData;
}
