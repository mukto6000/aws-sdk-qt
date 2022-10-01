// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEDEFINITIONREQUEST_H
#define QTAWS_UPDATEDEVICEDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateDeviceDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT UpdateDeviceDefinitionRequest : public GreengrassRequest {

public:
    UpdateDeviceDefinitionRequest(const UpdateDeviceDefinitionRequest &other);
    UpdateDeviceDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
