// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTIONREQUEST_H
#define QTAWS_CREATECONNECTIONREQUEST_H

#include "codestarconnectionsrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class CreateConnectionRequestPrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT CreateConnectionRequest : public CodeStarconnectionsRequest {

public:
    CreateConnectionRequest(const CreateConnectionRequest &other);
    CreateConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectionRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
