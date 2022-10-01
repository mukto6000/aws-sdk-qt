// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKREQUEST_H
#define QTAWS_CREATESTACKREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class CreateStackRequestPrivate;

class QTAWSOPSWORKS_EXPORT CreateStackRequest : public OpsWorksRequest {

public:
    CreateStackRequest(const CreateStackRequest &other);
    CreateStackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStackRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
