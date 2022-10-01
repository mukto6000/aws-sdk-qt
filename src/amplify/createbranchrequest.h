// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBRANCHREQUEST_H
#define QTAWS_CREATEBRANCHREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class CreateBranchRequestPrivate;

class QTAWSAMPLIFY_EXPORT CreateBranchRequest : public AmplifyRequest {

public:
    CreateBranchRequest(const CreateBranchRequest &other);
    CreateBranchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBranchRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
