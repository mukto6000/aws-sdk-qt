// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEQUOTAINCREASEREQUESTFROMTEMPLATEREQUEST_H
#define QTAWS_GETSERVICEQUOTAINCREASEREQUESTFROMTEMPLATEREQUEST_H

#include "servicequotasrequest.h"

namespace QtAws {
namespace ServiceQuotas {

class GetServiceQuotaIncreaseRequestFromTemplateRequestPrivate;

class QTAWSSERVICEQUOTAS_EXPORT GetServiceQuotaIncreaseRequestFromTemplateRequest : public ServiceQuotasRequest {

public:
    GetServiceQuotaIncreaseRequestFromTemplateRequest(const GetServiceQuotaIncreaseRequestFromTemplateRequest &other);
    GetServiceQuotaIncreaseRequestFromTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceQuotaIncreaseRequestFromTemplateRequest)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
