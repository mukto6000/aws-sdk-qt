// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPARAMETERREQUEST_H
#define QTAWS_PUTPARAMETERREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class PutParameterRequestPrivate;

class QTAWSSSM_EXPORT PutParameterRequest : public SsmRequest {

public:
    PutParameterRequest(const PutParameterRequest &other);
    PutParameterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutParameterRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
