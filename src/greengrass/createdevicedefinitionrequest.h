// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEDEFINITIONREQUEST_H
#define QTAWS_CREATEDEVICEDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateDeviceDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateDeviceDefinitionRequest : public GreengrassRequest {

public:
    CreateDeviceDefinitionRequest(const CreateDeviceDefinitionRequest &other);
    CreateDeviceDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeviceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
