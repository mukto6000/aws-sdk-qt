// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYPOLICYREQUEST_H
#define QTAWS_GETREPOSITORYPOLICYREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class GetRepositoryPolicyRequestPrivate;

class QTAWSECR_EXPORT GetRepositoryPolicyRequest : public EcrRequest {

public:
    GetRepositoryPolicyRequest(const GetRepositoryPolicyRequest &other);
    GetRepositoryPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRepositoryPolicyRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
