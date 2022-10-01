// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALARMREQUEST_H
#define QTAWS_DELETEALARMREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteAlarmRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteAlarmRequest : public LightsailRequest {

public:
    DeleteAlarmRequest(const DeleteAlarmRequest &other);
    DeleteAlarmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAlarmRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
