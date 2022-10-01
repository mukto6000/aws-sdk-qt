// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTSETTINGSREQUEST_H
#define QTAWS_UPDATEACCOUNTSETTINGSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateAccountSettingsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateAccountSettingsRequest : public QuickSightRequest {

public:
    UpdateAccountSettingsRequest(const UpdateAccountSettingsRequest &other);
    UpdateAccountSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccountSettingsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
