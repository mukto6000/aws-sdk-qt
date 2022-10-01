// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDGROUPPOLICIESREQUEST_H
#define QTAWS_LISTATTACHEDGROUPPOLICIESREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListAttachedGroupPoliciesRequestPrivate;

class QTAWSIAM_EXPORT ListAttachedGroupPoliciesRequest : public IamRequest {

public:
    ListAttachedGroupPoliciesRequest(const ListAttachedGroupPoliciesRequest &other);
    ListAttachedGroupPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttachedGroupPoliciesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
