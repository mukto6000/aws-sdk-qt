// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDATACOLLECTIONBYAGENTIDSREQUEST_H
#define QTAWS_STOPDATACOLLECTIONBYAGENTIDSREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StopDataCollectionByAgentIdsRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT StopDataCollectionByAgentIdsRequest : public ApplicationDiscoveryRequest {

public:
    StopDataCollectionByAgentIdsRequest(const StopDataCollectionByAgentIdsRequest &other);
    StopDataCollectionByAgentIdsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDataCollectionByAgentIdsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
