/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWSLEXMODELBUILDINGGLOBAL_H
#define QTAWSLEXMODELBUILDINGGLOBAL_H

// Export declaration macros.
#if defined(QTAWS_SHARED) || !defined(QTAWS_STATIC)
#  ifdef QTAWS_STATIC
#    error "Both QTAWS_SHARED and QTAWS_STATIC defined."
#  endif
#  if defined QTAWSLEXMODELBUILDING_LIBRARY
#    define QTAWSLEXMODELBUILDING_EXPORT Q_DECL_EXPORT
#  else
#    define QTAWSLEXMODELBUILDING_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTAWSLEXMODELBUILDING_EXPORT
#endif


#endif // QTAWSLEXMODELBUILDINGGLOBAL_H
