#ifndef _PE_H
#define _PE_H

#include "_global.h"

#define PE_ERROR_VALUE (ULONG)-1

PVOID PeGetPageBase(PVOID lpHeader, ULONG* Size, PVOID ptr);
ULONG_PTR PeGetExportOffset(const unsigned char* FileData, ULONG FileSize, const char* ExportName);

#endif