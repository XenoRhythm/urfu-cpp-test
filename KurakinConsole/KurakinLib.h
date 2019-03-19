#pragma once

#ifdef KURAKINLIB_EXPORTS
#define KURAKINLIB_API __declspec(dllexport)
#else
#define KURAKINLIB_API __declspec(dllimport)
#endif

extern "C" KURAKINLIB_API void PrintName();