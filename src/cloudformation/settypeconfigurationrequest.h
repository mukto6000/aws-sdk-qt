// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTYPECONFIGURATIONREQUEST_H
#define QTAWS_SETTYPECONFIGURATIONREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class SetTypeConfigurationRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT SetTypeConfigurationRequest : public CloudFormationRequest {

public:
    SetTypeConfigurationRequest(const SetTypeConfigurationRequest &other);
    SetTypeConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTypeConfigurationRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
