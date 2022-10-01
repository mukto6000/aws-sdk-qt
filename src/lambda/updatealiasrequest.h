// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALIASREQUEST_H
#define QTAWS_UPDATEALIASREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class UpdateAliasRequestPrivate;

class QTAWSLAMBDA_EXPORT UpdateAliasRequest : public LambdaRequest {

public:
    UpdateAliasRequest(const UpdateAliasRequest &other);
    UpdateAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAliasRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
