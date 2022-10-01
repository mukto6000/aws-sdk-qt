// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONREQUEST_P_H
#define QTAWS_CREATEFUNCTIONREQUEST_P_H

#include "lambdarequest_p.h"
#include "createfunctionrequest.h"

namespace QtAws {
namespace Lambda {

class CreateFunctionRequest;

class CreateFunctionRequestPrivate : public LambdaRequestPrivate {

public:
    CreateFunctionRequestPrivate(const LambdaRequest::Action action,
                                   CreateFunctionRequest * const q);
    CreateFunctionRequestPrivate(const CreateFunctionRequestPrivate &other,
                                   CreateFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFunctionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
