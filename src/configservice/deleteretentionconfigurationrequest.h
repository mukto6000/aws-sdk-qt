// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERETENTIONCONFIGURATIONREQUEST_H
#define QTAWS_DELETERETENTIONCONFIGURATIONREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteRetentionConfigurationRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteRetentionConfigurationRequest : public ConfigServiceRequest {

public:
    DeleteRetentionConfigurationRequest(const DeleteRetentionConfigurationRequest &other);
    DeleteRetentionConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRetentionConfigurationRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
