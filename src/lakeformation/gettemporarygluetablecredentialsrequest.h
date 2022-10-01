// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPORARYGLUETABLECREDENTIALSREQUEST_H
#define QTAWS_GETTEMPORARYGLUETABLECREDENTIALSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetTemporaryGlueTableCredentialsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT GetTemporaryGlueTableCredentialsRequest : public LakeFormationRequest {

public:
    GetTemporaryGlueTableCredentialsRequest(const GetTemporaryGlueTableCredentialsRequest &other);
    GetTemporaryGlueTableCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTemporaryGlueTableCredentialsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
