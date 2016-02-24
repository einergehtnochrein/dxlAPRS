/* XDS v2.60: Copyright (c) 1999-2011 Excelsior, LLC. All Rights Reserved. */
/* Generated by XDS Modula-2 to ANSI C v4.20 translator */

#ifndef TermFile_H_
#define TermFile_H_
#ifndef X2C_H_
#include "X2C.h"
#endif
#ifndef IOChan_H_
#include "IOChan.h"
#endif
#ifndef ChanConsts_H_
#include "ChanConsts.h"
#endif

typedef IOChan_ChanId TermFile_ChanId;

typedef X2C_CARD8 TermFile_FlagSet;

typedef enum ChanConsts_OpenResults TermFile_OpenResults;

extern X2C_CARD8 TermFile_read;

extern X2C_CARD8 TermFile_write;

extern X2C_CARD8 TermFile_text;

extern X2C_CARD8 TermFile_raw;

extern X2C_CARD8 TermFile_echo;

extern void TermFile_Open(IOChan_ChanId *, X2C_CARD8, X2C_CARD8 *);

extern X2C_BOOLEAN TermFile_IsTermFile(IOChan_ChanId);

extern void TermFile_Close(IOChan_ChanId *);


extern void TermFile_BEGIN(void);


#endif /* TermFile_H_ */