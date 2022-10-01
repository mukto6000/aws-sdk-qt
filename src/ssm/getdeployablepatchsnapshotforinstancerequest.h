// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYABLEPATCHSNAPSHOTFORINSTANCEREQUEST_H
#define QTAWS_GETDEPLOYABLEPATCHSNAPSHOTFORINSTANCEREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetDeployablePatchSnapshotForInstanceRequestPrivate;

class QTAWSSSM_EXPORT GetDeployablePatchSnapshotForInstanceRequest : public SsmRequest {

public:
    GetDeployablePatchSnapshotForInstanceRequest(const GetDeployablePatchSnapshotForInstanceRequest &other);
    GetDeployablePatchSnapshotForInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeployablePatchSnapshotForInstanceRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
