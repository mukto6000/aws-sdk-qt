// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELUNACLIENTREQUEST_H
#define QTAWS_CREATELUNACLIENTREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class CreateLunaClientRequestPrivate;

class QTAWSCLOUDHSM_EXPORT CreateLunaClientRequest : public CloudHsmRequest {

public:
    CreateLunaClientRequest(const CreateLunaClientRequest &other);
    CreateLunaClientRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLunaClientRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
