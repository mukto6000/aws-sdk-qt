// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICESREQUEST_H
#define QTAWS_LISTDEVICESREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListDevicesRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListDevicesRequest : public SageMakerRequest {

public:
    ListDevicesRequest(const ListDevicesRequest &other);
    ListDevicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDevicesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
