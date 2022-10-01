// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONSREQUEST_H
#define QTAWS_GETCONNECTIONSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetConnectionsRequestPrivate;

class QTAWSGLUE_EXPORT GetConnectionsRequest : public GlueRequest {

public:
    GetConnectionsRequest(const GetConnectionsRequest &other);
    GetConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectionsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
