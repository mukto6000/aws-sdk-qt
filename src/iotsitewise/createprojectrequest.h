// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROJECTREQUEST_H
#define QTAWS_CREATEPROJECTREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateProjectRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT CreateProjectRequest : public IoTSiteWiseRequest {

public:
    CreateProjectRequest(const CreateProjectRequest &other);
    CreateProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProjectRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
