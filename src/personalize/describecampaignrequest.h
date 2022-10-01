// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAMPAIGNREQUEST_H
#define QTAWS_DESCRIBECAMPAIGNREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DescribeCampaignRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DescribeCampaignRequest : public PersonalizeRequest {

public:
    DescribeCampaignRequest(const DescribeCampaignRequest &other);
    DescribeCampaignRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCampaignRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
