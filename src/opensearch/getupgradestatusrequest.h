// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPGRADESTATUSREQUEST_H
#define QTAWS_GETUPGRADESTATUSREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class GetUpgradeStatusRequestPrivate;

class QTAWSOPENSEARCH_EXPORT GetUpgradeStatusRequest : public OpenSearchRequest {

public:
    GetUpgradeStatusRequest(const GetUpgradeStatusRequest &other);
    GetUpgradeStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUpgradeStatusRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
