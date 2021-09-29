
// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#define _CRT_SECURE_NO_WARNINGS 1 //nur für sprintf

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // Exclude rarely-used stuff from Windows headers
#endif

#include <SDKDDKVer.h>


#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit


#include <vector>
#include <map>
#include <set>
#include <functional>
#include <algorithm>
#include <numeric>
#include <ppl.h>
#include <regex>
#define LAMBDARETURN return


