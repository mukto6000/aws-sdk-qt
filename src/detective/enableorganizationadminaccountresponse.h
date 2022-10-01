// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEORGANIZATIONADMINACCOUNTRESPONSE_H
#define QTAWS_ENABLEORGANIZATIONADMINACCOUNTRESPONSE_H

#include "detectiveresponse.h"
#include "enableorganizationadminaccountrequest.h"

namespace QtAws {
namespace Detective {

class EnableOrganizationAdminAccountResponsePrivate;

class QTAWSDETECTIVE_EXPORT EnableOrganizationAdminAccountResponse : public DetectiveResponse {
    Q_OBJECT

public:
    EnableOrganizationAdminAccountResponse(const EnableOrganizationAdminAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableOrganizationAdminAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableOrganizationAdminAccountResponse)
    Q_DISABLE_COPY(EnableOrganizationAdminAccountResponse)

};

} // namespace Detective
} // namespace QtAws

#endif
