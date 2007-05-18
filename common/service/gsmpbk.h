/* (c) 2001-2005 by Marcin Wiacek and Michal Cihar */

#ifndef __gsm_pbk_h
#define __gsm_pbk_h

#include <stdlib.h>

#include <gammu-memory.h>

#include "../gsmcomon.h"
#include "gsmmisc.h"
#include "../misc/coding/coding.h"


void GSM_TweakInternationalNumber(unsigned char *Number, const GSM_NumberType numType);

void GSM_PhonebookFindDefaultNameNumberGroup(GSM_MemoryEntry *entry, int *Name, int *Number, int *Group);



#endif

/* How should editor hadle tabs in this file? Add editor commands here.
 * vim: noexpandtab sw=8 ts=8 sts=8:
 */
