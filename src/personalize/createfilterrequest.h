// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILTERREQUEST_H
#define QTAWS_CREATEFILTERREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class CreateFilterRequestPrivate;

class QTAWSPERSONALIZE_EXPORT CreateFilterRequest : public PersonalizeRequest {

public:
    CreateFilterRequest(const CreateFilterRequest &other);
    CreateFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFilterRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
