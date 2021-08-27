--- src/printf.c.orig	2019-09-06 15:31:19 UTC
+++ src/printf.c
@@ -37,12 +37,16 @@
 #include <syslog.h>
 #include <limits.h>
 
-// Mac OS X has no pty.h, so use util.h instead
+// Include libutil
 #include "config.h"
 #ifdef HAVE_PTY_H
 	#include <pty.h>
-#else
+#endif
+#ifdef HAVE_UTIL_H
 	#include <util.h>
+#endif
+#ifdef HAVE_LIBUTIL_H
+	#include <libutil.h>
 #endif
 
 #include <sys/ioctl.h>
