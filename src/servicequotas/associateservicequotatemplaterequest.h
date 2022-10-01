// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESERVICEQUOTATEMPLATEREQUEST_H
#define QTAWS_ASSOCIATESERVICEQUOTATEMPLATEREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class AssociateServiceQuotaTemplateRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT AssociateServiceQuotaTemplateRequest : public ServiceQuotasRequest {

public:
    AssociateServiceQuotaTemplateRequest(const AssociateServiceQuotaTemplateRequest &other);
    AssociateServiceQuotaTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateServiceQuotaTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
