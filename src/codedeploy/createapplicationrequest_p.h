// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONREQUEST_P_H
#define QTAWS_CREATEAPPLICATIONREQUEST_P_H

#include "codedeployrequest_p.h"
#include "createapplicationrequest.h"

namespace QtAws {
namespace CodeDeploy {

class CreateApplicationRequest;

class CreateApplicationRequestPrivate : public CodeDeployRequestPrivate {

public:
    CreateApplicationRequestPrivate(const CodeDeployRequest::Action action,
                                   CreateApplicationRequest * const q);
    CreateApplicationRequestPrivate(const CreateApplicationRequestPrivate &other,
                                   CreateApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApplicationRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
