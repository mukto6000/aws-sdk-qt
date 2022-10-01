// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINSREQUEST_H
#define QTAWS_LISTDOMAINSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListDomainsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListDomainsRequest : public SageMakerRequest {

public:
    ListDomainsRequest(const ListDomainsRequest &other);
    ListDomainsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
