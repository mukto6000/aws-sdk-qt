// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWREQUEST_H
#define QTAWS_DELETEFLOWREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class DeleteFlowRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT DeleteFlowRequest : public MediaConnectRequest {

public:
    DeleteFlowRequest(const DeleteFlowRequest &other);
    DeleteFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFlowRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
