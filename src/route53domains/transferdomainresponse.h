// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERDOMAINRESPONSE_H
#define QTAWS_TRANSFERDOMAINRESPONSE_H

#include "route53domainsresponse.h"
#include "transferdomainrequest.h"

namespace QtAws {
namespace Route53Domains {

class TransferDomainResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT TransferDomainResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    TransferDomainResponse(const TransferDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TransferDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TransferDomainResponse)
    Q_DISABLE_COPY(TransferDomainResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
