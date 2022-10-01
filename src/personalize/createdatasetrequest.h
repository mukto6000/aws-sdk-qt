// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETREQUEST_H
#define QTAWS_CREATEDATASETREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class CreateDatasetRequestPrivate;

class QTAWSPERSONALIZE_EXPORT CreateDatasetRequest : public PersonalizeRequest {

public:
    CreateDatasetRequest(const CreateDatasetRequest &other);
    CreateDatasetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatasetRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
