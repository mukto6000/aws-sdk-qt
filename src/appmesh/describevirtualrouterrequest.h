// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALROUTERREQUEST_H
#define QTAWS_DESCRIBEVIRTUALROUTERREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualRouterRequestPrivate;

class QTAWSAPPMESH_EXPORT DescribeVirtualRouterRequest : public AppMeshRequest {

public:
    DescribeVirtualRouterRequest(const DescribeVirtualRouterRequest &other);
    DescribeVirtualRouterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVirtualRouterRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
