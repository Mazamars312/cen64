//
// os/keycodes.h
//
// Definitions for keycodes.
//
// This file is subject to the terms and conditions defined in
// 'LICENSE', which is part of this source code package.
//

#ifndef __os_keycodes_h__
#define __os_keycodes_h__

#ifdef _WIN32
#include "os/windows/keycodes.h"

#else
#include "os/unix/keycodes.h"
#endif

#endif

