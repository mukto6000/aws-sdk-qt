// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCAMPAIGNREQUEST_H
#define QTAWS_STARTCAMPAIGNREQUEST_H

#include "connectcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class StartCampaignRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT StartCampaignRequest : public ConnectCampaignsRequest {

public:
    StartCampaignRequest(const StartCampaignRequest &other);
    StartCampaignRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCampaignRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
