#	$OpenBSD: Makefile.inc,v 1.78 2018/01/12 04:36:12 deraadt Exp $

# stdio sources
VPATH+=	${LIBCSRCDIR}/gen

SRCS+=	basename.c devname.c dirname.c errc.c fts.c getmntinfo.c glob.c \
	setmode.c unvis.c verrc.c vis.c vwarnc.c warnc.c getbsize.c getcap.c \
	pwcache.c pw_dup.c readpassphrase.c setprogname.c getprogname.c

include ${.TOPDIR}/config.mk

ifneq ($(HAVE_SYS_SIGNAME),1)
SRCS+=	signame.c
endif

ifneq ($(HAVE_SYS_SIGLIST),1)
SRCS+=	siglist.c
endif

MAN+=	basename.3 devname.3 dirname.3 fts.3 getmntinfo.3 glob.3 setmode.3 \
	unvis.3 vis.3 getbsize.3 getcap.3 pwcache.3 pw_dup.3 setproctitle.3 \
	readpassphrase.3 getprogname.3
