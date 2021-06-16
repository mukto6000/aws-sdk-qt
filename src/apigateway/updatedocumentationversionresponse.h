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

#ifndef QTAWS_UPDATEDOCUMENTATIONVERSIONRESPONSE_H
#define QTAWS_UPDATEDOCUMENTATIONVERSIONRESPONSE_H

#include "apigatewayresponse.h"
#include "updatedocumentationversionrequest.h"

namespace QtAws {
namespace APIGateway {

class UpdateDocumentationVersionResponsePrivate;

class QTAWS_EXPORT UpdateDocumentationVersionResponse : public APIGatewayResponse {
    Q_OBJECT

public:
    UpdateDocumentationVersionResponse(const UpdateDocumentationVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDocumentationVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDocumentationVersionResponse)
    Q_DISABLE_COPY(UpdateDocumentationVersionResponse)

};

} // namespace APIGateway
} // namespace QtAws

#endif
