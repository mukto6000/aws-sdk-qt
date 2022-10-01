// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELPACKAGEGROUPPOLICYRESPONSE_H
#define QTAWS_GETMODELPACKAGEGROUPPOLICYRESPONSE_H

#include "sagemakerresponse.h"
#include "getmodelpackagegrouppolicyrequest.h"

namespace QtAws {
namespace SageMaker {

class GetModelPackageGroupPolicyResponsePrivate;

class QTAWSSAGEMAKER_EXPORT GetModelPackageGroupPolicyResponse : public SageMakerResponse {
    Q_OBJECT

public:
    GetModelPackageGroupPolicyResponse(const GetModelPackageGroupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetModelPackageGroupPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetModelPackageGroupPolicyResponse)
    Q_DISABLE_COPY(GetModelPackageGroupPolicyResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
