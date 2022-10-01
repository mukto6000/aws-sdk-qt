// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTENGAGEMENTREQUEST_H
#define QTAWS_STARTENGAGEMENTREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class StartEngagementRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT StartEngagementRequest : public SsmContactsRequest {

public:
    StartEngagementRequest(const StartEngagementRequest &other);
    StartEngagementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartEngagementRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
