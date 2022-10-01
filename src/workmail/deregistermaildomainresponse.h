// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERMAILDOMAINRESPONSE_H
#define QTAWS_DEREGISTERMAILDOMAINRESPONSE_H

#include "workmailresponse.h"
#include "deregistermaildomainrequest.h"

namespace QtAws {
namespace WorkMail {

class DeregisterMailDomainResponsePrivate;

class QTAWSWORKMAIL_EXPORT DeregisterMailDomainResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DeregisterMailDomainResponse(const DeregisterMailDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterMailDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterMailDomainResponse)
    Q_DISABLE_COPY(DeregisterMailDomainResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
