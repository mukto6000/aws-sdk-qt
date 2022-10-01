// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYREQUEST_H
#define QTAWS_GETREGISTRYREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetRegistryRequestPrivate;

class QTAWSGLUE_EXPORT GetRegistryRequest : public GlueRequest {

public:
    GetRegistryRequest(const GetRegistryRequest &other);
    GetRegistryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegistryRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
