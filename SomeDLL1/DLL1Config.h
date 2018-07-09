#pragma once

#ifdef SOMEDLL1_EXPORTS
#define SOMEDLL1_API    __declspec(dllexport)
#else
#define SOMEDLL1_API    __declspec(dllimport)
#endif


#include <skia/core/SkVertices.h>
#include <skia/core/SkData.h>
#include <skia/core/SkTextBlob.h>

