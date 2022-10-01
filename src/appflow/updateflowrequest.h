// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWREQUEST_H
#define QTAWS_UPDATEFLOWREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class UpdateFlowRequestPrivate;

class QTAWSAPPFLOW_EXPORT UpdateFlowRequest : public AppflowRequest {

public:
    UpdateFlowRequest(const UpdateFlowRequest &other);
    UpdateFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFlowRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
