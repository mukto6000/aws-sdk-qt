// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPOINTSREQUEST_H
#define QTAWS_LISTACCESSPOINTSREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class ListAccessPointsRequestPrivate;

class QTAWSS3CONTROL_EXPORT ListAccessPointsRequest : public S3ControlRequest {

public:
    ListAccessPointsRequest(const ListAccessPointsRequest &other);
    ListAccessPointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessPointsRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
