// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLINGRULESREQUEST_H
#define QTAWS_GETSAMPLINGRULESREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class GetSamplingRulesRequestPrivate;

class QTAWSXRAY_EXPORT GetSamplingRulesRequest : public XRayRequest {

public:
    GetSamplingRulesRequest(const GetSamplingRulesRequest &other);
    GetSamplingRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSamplingRulesRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
