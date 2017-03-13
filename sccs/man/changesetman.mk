#ident @(#)changesetman.mk	1.1 15/01/19 
###########################################################################
# Sample makefile for installing manual pages
###########################################################################
SRCROOT=	../..
RULESDIR=	RULES
include		$(SRCROOT)/$(RULESDIR)/rules.top
###########################################################################

MANDIR=		man
TARGETMAN=	changeset
MANSECT=	$(MANSECT_FILEFORM)
MANSUFFIX=	$(MANSUFF_FILEFORM)
MANFILE=	changeset.4

changeset.4.html: sccschangeset.4

###########################################################################
include		$(SRCROOT)/$(RULESDIR)/rules.man
###########################################################################
