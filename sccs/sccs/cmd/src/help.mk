#ident @(#)help.mk	1.2 08/01/02 
###########################################################################
# Sample makefile for general application programs
###########################################################################
SRCROOT=	../../../..
RULESDIR=	RULES
include		$(SRCROOT)/$(RULESDIR)/rules.top
###########################################################################

#INSDIR=	sccs
INSDIR=		ccs/bin
TARGET=		help

CPPOPTS +=	-DSUN5_0
CPPOPTS +=	-DUSE_LARGEFILES
CPPOPTS +=	-I../../../sgs/inc/common
CPPOPTS +=	-I../../hdr
CPPOPTS +=	-DUSE_NLS
CPPOPTS +=	-DINS_BASE=\"${INS_BASE}\"

CFILES=		help.c

LIBS=		-lcomobj -lcassi -lmpw $(LIB_INTL)
#XMK_FILE=	Makefile.man

###########################################################################
include		$(SRCROOT)/$(RULESDIR)/rules.cmd
###########################################################################
