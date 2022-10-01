// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASESREQUEST_H
#define QTAWS_GETRELATIONALDATABASESREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabasesRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabasesRequest : public LightsailRequest {

public:
    GetRelationalDatabasesRequest(const GetRelationalDatabasesRequest &other);
    GetRelationalDatabasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabasesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
