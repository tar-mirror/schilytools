/* @(#)init.c	1.2 17/02/15 Copyright 2017 J. Schilling */
#include <schily/mconfig.h>
#ifndef lint
static	UConst char sccsid[] =
	"@(#)init.c	1.2 17/02/15 Copyright 2017 J. Schilling";
#endif
/*
 *	Initalize the data structure for a StreamArchive
 *
 *	Copyright (c) 2017 J. Schilling
 */
/*
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License, Version 1.0 only
 * (the "License").  You may not use this file except in compliance
 * with the License.
 *
 * See the file CDDL.Schily.txt in this distribution for details.
 * A copy of the CDDL is also available via the Internet at
 * http://www.opensource.org/licenses/cddl1.txt
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file CDDL.Schily.txt from this distribution.
 */

#include <schily/stdio.h>
#include <schily/utypes.h>
#include <schily/schily.h>
#include <schily/strar.h>

void
strar_init(info)
	register strar	*info;
{
	fillbytes(info, sizeof (*info), '\0');
}
