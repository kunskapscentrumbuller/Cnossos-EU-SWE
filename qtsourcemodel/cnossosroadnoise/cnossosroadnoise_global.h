#ifndef CNOSSOSROADNOISE_GLOBAL_H
#define CNOSSOSROADNOISE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CNOSSOSROADNOISE_LIBRARY)
#  define CNOSSOSROADNOISESHARED_EXPORT Q_DECL_EXPORT
#else
#  define CNOSSOSROADNOISESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CNOSSOSROADNOISE_GLOBAL_H
