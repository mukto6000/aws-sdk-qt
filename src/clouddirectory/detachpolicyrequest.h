// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHPOLICYREQUEST_H
#define QTAWS_DETACHPOLICYREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DetachPolicyRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DetachPolicyRequest : public CloudDirectoryRequest {

public:
    DetachPolicyRequest(const DetachPolicyRequest &other);
    DetachPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachPolicyRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
