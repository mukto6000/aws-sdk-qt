// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTREQUEST_H
#define QTAWS_CREATEENVIRONMENTREQUEST_H

#include "mwaarequest.h"

namespace QtAws {
namespace Mwaa {

class CreateEnvironmentRequestPrivate;

class QTAWSMWAA_EXPORT CreateEnvironmentRequest : public MwaaRequest {

public:
    CreateEnvironmentRequest(const CreateEnvironmentRequest &other);
    CreateEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif
