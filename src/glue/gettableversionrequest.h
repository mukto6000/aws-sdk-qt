// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEVERSIONREQUEST_H
#define QTAWS_GETTABLEVERSIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetTableVersionRequestPrivate;

class QTAWSGLUE_EXPORT GetTableVersionRequest : public GlueRequest {

public:
    GetTableVersionRequest(const GetTableVersionRequest &other);
    GetTableVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTableVersionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
