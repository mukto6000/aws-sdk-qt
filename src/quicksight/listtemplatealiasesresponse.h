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

#ifndef QTAWS_LISTTEMPLATEALIASESRESPONSE_H
#define QTAWS_LISTTEMPLATEALIASESRESPONSE_H

#include "quicksightresponse.h"
#include "listtemplatealiasesrequest.h"

namespace QtAws {
namespace QuickSight {

class ListTemplateAliasesResponsePrivate;

class QTAWS_EXPORT ListTemplateAliasesResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListTemplateAliasesResponse(const ListTemplateAliasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTemplateAliasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTemplateAliasesResponse)
    Q_DISABLE_COPY(ListTemplateAliasesResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif