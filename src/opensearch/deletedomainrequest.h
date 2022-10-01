// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINREQUEST_H
#define QTAWS_DELETEDOMAINREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class DeleteDomainRequestPrivate;

class QTAWSOPENSEARCH_EXPORT DeleteDomainRequest : public OpenSearchRequest {

public:
    DeleteDomainRequest(const DeleteDomainRequest &other);
    DeleteDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
