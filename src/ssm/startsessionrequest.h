// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSESSIONREQUEST_H
#define QTAWS_STARTSESSIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class StartSessionRequestPrivate;

class QTAWSSSM_EXPORT StartSessionRequest : public SsmRequest {

public:
    StartSessionRequest(const StartSessionRequest &other);
    StartSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSessionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
