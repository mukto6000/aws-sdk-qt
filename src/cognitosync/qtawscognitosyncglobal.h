// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSCOGNITOSYNCGLOBAL_H
#define QTAWSCOGNITOSYNCGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSCOGNITOSYNC_LIBRARY
#    define QTAWSCOGNITOSYNC_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSCOGNITOSYNC_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSCOGNITOSYNC_EXPORT
#endif

#endif // QTAWSCOGNITOSYNCGLOBAL_H
