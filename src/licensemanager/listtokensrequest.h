// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOKENSREQUEST_H
#define QTAWS_LISTTOKENSREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListTokensRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT ListTokensRequest : public LicenseManagerRequest {

public:
    ListTokensRequest(const ListTokensRequest &other);
    ListTokensRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTokensRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
