// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPACKAGEREQUEST_H
#define QTAWS_UPDATEPACKAGEREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class UpdatePackageRequestPrivate;

class QTAWSOPENSEARCH_EXPORT UpdatePackageRequest : public OpenSearchRequest {

public:
    UpdatePackageRequest(const UpdatePackageRequest &other);
    UpdatePackageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePackageRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
