// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEROLEFORACCOUNTRESPONSE_H
#define QTAWS_GETSERVICEROLEFORACCOUNTRESPONSE_H

#include "greengrassv2response.h"
#include "getserviceroleforaccountrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class GetServiceRoleForAccountResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT GetServiceRoleForAccountResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    GetServiceRoleForAccountResponse(const GetServiceRoleForAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServiceRoleForAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceRoleForAccountResponse)
    Q_DISABLE_COPY(GetServiceRoleForAccountResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
