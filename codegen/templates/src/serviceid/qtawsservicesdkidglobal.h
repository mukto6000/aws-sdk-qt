// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

{% with service.canonicalId as ServiceName %}
#ifndef QTAWS{{ServiceName|upper}}GLOBAL_H
#define QTAWS{{ServiceName|upper}}GLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWS{{ServiceName|upper}}_LIBRARY
#    define QTAWS{{ServiceName|upper}}_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWS{{ServiceName|upper}}_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWS{{ServiceName|upper}}_EXPORT
#endif


#endif // QTAWS{{ServiceName|upper}}GLOBAL_H
{% endwith %}
