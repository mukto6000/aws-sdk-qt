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

#ifndef QTAWS_LISTSERVICEQUOTASRESPONSE_P_H
#define QTAWS_LISTSERVICEQUOTASRESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class ListServiceQuotasResponse;

class QTAWS_EXPORT ListServiceQuotasResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    ListServiceQuotasResponsePrivate(ListServiceQuotasResponse * const q);

    void parseListServiceQuotasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServiceQuotasResponse)
    Q_DISABLE_COPY(ListServiceQuotasResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
