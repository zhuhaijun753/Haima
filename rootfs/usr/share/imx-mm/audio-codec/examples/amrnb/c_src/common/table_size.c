/*
 ***********************************************************************
 * Copyright 2005-2010 by Freescale Semiconductor, Inc.
 * All modifications are confidential and proprietary information
 * of Freescale Semiconductor, Inc.
 ***********************************************************************
 */
#include "nbamr_tables.h"
#ifdef TABLE_RELOCATION
S16 tab_size[108];
void table_info(void)
{
int i=0;
tab_size[i++]=10;
tab_size[i++]=9;
tab_size[i++]=9;
tab_size[i++]=9;
tab_size[i++]=8;
tab_size[i++]=17;
tab_size[i++]=19;
tab_size[i++]=19;
tab_size[i++]=19;
tab_size[i++]=19;
tab_size[i++]=23;
tab_size[i++]=39;
tab_size[i++]=57;
tab_size[i++]=5;
tab_size[i++]=9;
tab_size[i++]=16;
tab_size[i++]=16;
tab_size[i++]=49;
#ifndef TARGET_ARM11
tab_size[i++]=10;
tab_size[i++]=10;
#else
tab_size[i++]=10;
#endif
tab_size[i++]=33;
tab_size[i++]=10;
tab_size[i++]=33;
tab_size[i++]=80;
tab_size[i++]=10;
tab_size[i++]=10;
tab_size[i++]=768;
tab_size[i++]=1536;
tab_size[i++]=2048;
tab_size[i++]=512;
tab_size[i++]=1536;
tab_size[i++]=10;
tab_size[i++]=512;
tab_size[i++]=1024;
tab_size[i++]=1024;
tab_size[i++]=1024;
tab_size[i++]=256;
tab_size[i++]=1024;
tab_size[i++]=512;
tab_size[i++]=256;
tab_size[i++]=49;
tab_size[i++]=65;
tab_size[i++]=64;
tab_size[i++]=240;
tab_size[i++]=240;
tab_size[i++]=240;
tab_size[i++]=4;
tab_size[i++]=4;
tab_size[i++]=61;
tab_size[i++]=8;
tab_size[i++]=17;
tab_size[i++]=19;
tab_size[i++]=19;
tab_size[i++]=19;
tab_size[i++]=19;
tab_size[i++]=23;
tab_size[i++]=39;
tab_size[i++]=57;
tab_size[i++]=8;
tab_size[i++]=40;
tab_size[i++]=40;
tab_size[i++]=40;
tab_size[i++]=40;
tab_size[i++]=10;
tab_size[i++]=9;
tab_size[i++]=7;
tab_size[i++]=7;
tab_size[i++]=3;
tab_size[i++]=3;
tab_size[i++]=10;
tab_size[i++]=10;
tab_size[i++]=10;
tab_size[i++]=10;
tab_size[i++]=8;
tab_size[i++]=25;
tab_size[i++]=2;
tab_size[i++]=4;
tab_size[i++]=251;
tab_size[i++]=61;
tab_size[i++]=20;
tab_size[i++]=10;
tab_size[i++]=10;
tab_size[i++]=10;
tab_size[i++]=9;
tab_size[i++]=3;
tab_size[i++]=3;
tab_size[i++]=128;
tab_size[i++]=6;
tab_size[i++]=16*2;
tab_size[i++]=16;
tab_size[i++]=90;
tab_size[i++]=20;
tab_size[i++]=20;
tab_size[i++]=20;
tab_size[i++]=2;
tab_size[i++]=2;
tab_size[i++]=2;
tab_size[i++]=2;
tab_size[i++]=2;
tab_size[i++]=2;
tab_size[i++]=16;
tab_size[i++]=16;
tab_size[i++]=16;
tab_size[i++]=16;
tab_size[i++]=70;
tab_size[i++]=16;
tab_size[i]=16;
}
#endif