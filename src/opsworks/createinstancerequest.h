// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEREQUEST_H
#define QTAWS_CREATEINSTANCEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class CreateInstanceRequestPrivate;

class QTAWSOPSWORKS_EXPORT CreateInstanceRequest : public OpsWorksRequest {

public:
    CreateInstanceRequest(const CreateInstanceRequest &other);
    CreateInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
