#pragma once

#ifdef SOMEDLL2_EXPORTS
#define SOMEDLL2_API    __declspec(dllexport)
#else
#define SOMEDLL2_API    __declspec(dllimport)
#endif

#include <skia/core/SkVertices.h>
#include <skia/core/SkData.h>
#include <skia/core/SkTextBlob.h>

