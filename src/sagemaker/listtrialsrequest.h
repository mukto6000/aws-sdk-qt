// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRIALSREQUEST_H
#define QTAWS_LISTTRIALSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTrialsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListTrialsRequest : public SageMakerRequest {

public:
    ListTrialsRequest(const ListTrialsRequest &other);
    ListTrialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrialsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
