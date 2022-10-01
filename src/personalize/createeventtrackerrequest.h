// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTTRACKERREQUEST_H
#define QTAWS_CREATEEVENTTRACKERREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class CreateEventTrackerRequestPrivate;

class QTAWSPERSONALIZE_EXPORT CreateEventTrackerRequest : public PersonalizeRequest {

public:
    CreateEventTrackerRequest(const CreateEventTrackerRequest &other);
    CreateEventTrackerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventTrackerRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
