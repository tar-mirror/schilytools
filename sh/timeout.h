/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License, Version 1.0 only
 * (the "License").  You may not use this file except in compliance
 * with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */
/*	Copyright (c) 1984, 1986, 1987, 1988, 1989 AT&T	*/
/*	  All Rights Reserved  	*/


#if defined(sun)
#pragma ident	"@(#)timeout.h	1.7	05/06/08 SMI"	/* SVr4.0 1.7	*/
#endif
/*
 * This file contains modifications Copyright 2009-2012 J. Schilling
 * @(#)timeout.h	1.4 12/04/22 2009-2012 J. Schilling
 */
/*
 *	UNIX shell
 */

#define	TIMEOUT 	0	/* seconds elapsing before log-off (normal) */
#define	MAILCHECK	"600"	/* 10 minutes */