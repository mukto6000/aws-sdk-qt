// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHUSERPOLICYREQUEST_H
#define QTAWS_DETACHUSERPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DetachUserPolicyRequestPrivate;

class QTAWSIAM_EXPORT DetachUserPolicyRequest : public IamRequest {

public:
    DetachUserPolicyRequest(const DetachUserPolicyRequest &other);
    DetachUserPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachUserPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
