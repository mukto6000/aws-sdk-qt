// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLINEAGEGROUPSREQUEST_H
#define QTAWS_LISTLINEAGEGROUPSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListLineageGroupsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListLineageGroupsRequest : public SageMakerRequest {

public:
    ListLineageGroupsRequest(const ListLineageGroupsRequest &other);
    ListLineageGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLineageGroupsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
