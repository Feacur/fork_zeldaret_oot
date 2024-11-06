#ifndef Z_EN_BROB_H
#define Z_EN_BROB_H

#include "ultra64.h"
#include "global.h"

struct EnBrob;

typedef void (*EnBrobActionFunc)(struct EnBrob* this, PlayState* play);

#define ENBROB_LIMB_MAX 10

typedef struct EnBrob {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ SkelAnime skelAnime;
    /* 0x01A8 */ EnBrobActionFunc actionFunc;
    /* 0x01AC */ s16 timer;
    /* 0x01AE */ s16 modelOffsetY;
    /* 0x01B0 */ Vec3s jointTable[ENBROB_LIMB_MAX];
    /* 0x01EC */ Vec3s morphTable[ENBROB_LIMB_MAX];
    /* 0x0228 */ ColliderCylinder colliders[2];
} EnBrob; // size = 0x02C0

#endif
