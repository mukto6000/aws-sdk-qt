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

#ifndef QTAWS_GETCREDENTIALSRESPONSE_H
#define QTAWS_GETCREDENTIALSRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "getcredentialsrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetCredentialsResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT GetCredentialsResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    GetCredentialsResponse(const GetCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCredentialsResponse)
    Q_DISABLE_COPY(GetCredentialsResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
