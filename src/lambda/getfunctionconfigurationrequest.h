// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONCONFIGURATIONREQUEST_H
#define QTAWS_GETFUNCTIONCONFIGURATIONREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionConfigurationRequestPrivate;

class QTAWSLAMBDA_EXPORT GetFunctionConfigurationRequest : public LambdaRequest {

public:
    GetFunctionConfigurationRequest(const GetFunctionConfigurationRequest &other);
    GetFunctionConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionConfigurationRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
