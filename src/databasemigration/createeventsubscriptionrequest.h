// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTSUBSCRIPTIONREQUEST_H
#define QTAWS_CREATEEVENTSUBSCRIPTIONREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateEventSubscriptionRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT CreateEventSubscriptionRequest : public DatabaseMigrationRequest {

public:
    CreateEventSubscriptionRequest(const CreateEventSubscriptionRequest &other);
    CreateEventSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventSubscriptionRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
