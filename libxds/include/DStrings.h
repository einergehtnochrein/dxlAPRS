/* XDS v2.60: Copyright (c) 1999-2011 Excelsior, LLC. All Rights Reserved. */
/* Generated by XDS Oberon-2 to ANSI C v4.20 translator */

#ifndef DStrings_H_
#define DStrings_H_
#ifndef X2C_H_
#include "X2C.h"
#endif


struct DStrings__0 {
   X2C_CHAR * Adr;
   X2C_INDEX Len0;
};

typedef struct DStrings__0 * DStrings_String;

extern void DStrings_Assign(X2C_CHAR [], X2C_CARD32, DStrings_String *);

extern void DStrings_Append(X2C_CHAR [], X2C_CARD32, DStrings_String *);


extern void DStrings_BEGIN(void);


#endif /* DStrings_H_ */