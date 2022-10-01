// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYGROUPREQUEST_H
#define QTAWS_UPDATEGATEWAYGROUPREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateGatewayGroupRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT UpdateGatewayGroupRequest : public AlexaForBusinessRequest {

public:
    UpdateGatewayGroupRequest(const UpdateGatewayGroupRequest &other);
    UpdateGatewayGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewayGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
