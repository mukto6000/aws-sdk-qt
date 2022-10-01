// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCRIPTREQUEST_H
#define QTAWS_CREATESCRIPTREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreateScriptRequestPrivate;

class QTAWSGLUE_EXPORT CreateScriptRequest : public GlueRequest {

public:
    CreateScriptRequest(const CreateScriptRequest &other);
    CreateScriptRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateScriptRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
