# $FreeBSD$

PORTNAME=	loudgain
DISTVERSION=	0.6.8
CATEGORIES=	audio
MASTER_SITES=	#

MAINTAINER=	y@trombik.org
COMMENT=	ReplayGain 2.0 loudness normalizer

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	\
	libavcodec.so:multimedia/ffmpeg \
	libtag.so:audio/taglib \
	libebur128.so:audio/libebur128

USE_GITHUB=	yes
GH_TUPLE=	Moonbase59:loudgain:v${DISTVERSION}
USES=	cmake pkgconfig shebangfix
SHEBANG_FILES=	bin/rgbpm
MANDIRS=	${WRKSRC}/docs

pre-configure:
	${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' ${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
