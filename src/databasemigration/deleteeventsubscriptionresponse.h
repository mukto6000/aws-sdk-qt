// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSUBSCRIPTIONRESPONSE_H
#define QTAWS_DELETEEVENTSUBSCRIPTIONRESPONSE_H

#include "databasemigrationresponse.h"
#include "deleteeventsubscriptionrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteEventSubscriptionResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DeleteEventSubscriptionResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DeleteEventSubscriptionResponse(const DeleteEventSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEventSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventSubscriptionResponse)
    Q_DISABLE_COPY(DeleteEventSubscriptionResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
