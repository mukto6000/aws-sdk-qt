// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATEREQUEST_H
#define QTAWS_GETTEMPLATEREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class GetTemplateRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT GetTemplateRequest : public CloudFormationRequest {

public:
    GetTemplateRequest(const GetTemplateRequest &other);
    GetTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTemplateRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
