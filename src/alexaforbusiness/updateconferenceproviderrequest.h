// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFERENCEPROVIDERREQUEST_H
#define QTAWS_UPDATECONFERENCEPROVIDERREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateConferenceProviderRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT UpdateConferenceProviderRequest : public AlexaForBusinessRequest {

public:
    UpdateConferenceProviderRequest(const UpdateConferenceProviderRequest &other);
    UpdateConferenceProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConferenceProviderRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
