// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISCOVEREDSCHEMAREQUEST_H
#define QTAWS_GETDISCOVEREDSCHEMAREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class GetDiscoveredSchemaRequestPrivate;

class QTAWSSCHEMAS_EXPORT GetDiscoveredSchemaRequest : public SchemasRequest {

public:
    GetDiscoveredSchemaRequest(const GetDiscoveredSchemaRequest &other);
    GetDiscoveredSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDiscoveredSchemaRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
