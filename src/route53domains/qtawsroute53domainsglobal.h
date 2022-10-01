// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWSROUTE53DOMAINSGLOBAL_H
#define QTAWSROUTE53DOMAINSGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSROUTE53DOMAINS_LIBRARY
#    define QTAWSROUTE53DOMAINS_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSROUTE53DOMAINS_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSROUTE53DOMAINS_EXPORT
#endif


#endif // QTAWSROUTE53DOMAINSGLOBAL_H
