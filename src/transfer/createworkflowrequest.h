// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKFLOWREQUEST_H
#define QTAWS_CREATEWORKFLOWREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class CreateWorkflowRequestPrivate;

class QTAWSTRANSFER_EXPORT CreateWorkflowRequest : public TransferRequest {

public:
    CreateWorkflowRequest(const CreateWorkflowRequest &other);
    CreateWorkflowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkflowRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
