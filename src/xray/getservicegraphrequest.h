// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEGRAPHREQUEST_H
#define QTAWS_GETSERVICEGRAPHREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class GetServiceGraphRequestPrivate;

class QTAWSXRAY_EXPORT GetServiceGraphRequest : public XRayRequest {

public:
    GetServiceGraphRequest(const GetServiceGraphRequest &other);
    GetServiceGraphRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceGraphRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
