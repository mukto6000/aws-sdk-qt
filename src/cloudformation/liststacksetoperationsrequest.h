// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSETOPERATIONSREQUEST_H
#define QTAWS_LISTSTACKSETOPERATIONSREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackSetOperationsRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ListStackSetOperationsRequest : public CloudFormationRequest {

public:
    ListStackSetOperationsRequest(const ListStackSetOperationsRequest &other);
    ListStackSetOperationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStackSetOperationsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
