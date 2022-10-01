// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHAPGREQUEST_H
#define QTAWS_CREATEHAPGREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class CreateHapgRequestPrivate;

class QTAWSCLOUDHSM_EXPORT CreateHapgRequest : public CloudHsmRequest {

public:
    CreateHapgRequest(const CreateHapgRequest &other);
    CreateHapgRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHapgRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
