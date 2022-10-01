// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYDOMAINDKIMREQUEST_H
#define QTAWS_VERIFYDOMAINDKIMREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class VerifyDomainDkimRequestPrivate;

class QTAWSSES_EXPORT VerifyDomainDkimRequest : public SesRequest {

public:
    VerifyDomainDkimRequest(const VerifyDomainDkimRequest &other);
    VerifyDomainDkimRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyDomainDkimRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
