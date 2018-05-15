/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_GETKEYPOLICYRESPONSE_H
#define QTAWS_GETKEYPOLICYRESPONSE_H

#include "kmsresponse.h"
#include "getkeypolicyrequest.h"

namespace QtAws {
namespace KMS {

class GetKeyPolicyResponsePrivate;

class QTAWS_EXPORT GetKeyPolicyResponse : public KmsResponse {
    Q_OBJECT

public:
    GetKeyPolicyResponse(const GetKeyPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetKeyPolicyRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(GetKeyPolicyResponse)
    Q_DISABLE_COPY(GetKeyPolicyResponse)

};

} // namespace KMS
} // namespace QtAws

#endif