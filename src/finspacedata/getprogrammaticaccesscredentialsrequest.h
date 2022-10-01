// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROGRAMMATICACCESSCREDENTIALSREQUEST_H
#define QTAWS_GETPROGRAMMATICACCESSCREDENTIALSREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class GetProgrammaticAccessCredentialsRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT GetProgrammaticAccessCredentialsRequest : public FinspaceDataRequest {

public:
    GetProgrammaticAccessCredentialsRequest(const GetProgrammaticAccessCredentialsRequest &other);
    GetProgrammaticAccessCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProgrammaticAccessCredentialsRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
