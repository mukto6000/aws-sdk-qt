// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SKIPWAITTIMEFORINSTANCETERMINATIONREQUEST_H
#define QTAWS_SKIPWAITTIMEFORINSTANCETERMINATIONREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class SkipWaitTimeForInstanceTerminationRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT SkipWaitTimeForInstanceTerminationRequest : public CodeDeployRequest {

public:
    SkipWaitTimeForInstanceTerminationRequest(const SkipWaitTimeForInstanceTerminationRequest &other);
    SkipWaitTimeForInstanceTerminationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SkipWaitTimeForInstanceTerminationRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
